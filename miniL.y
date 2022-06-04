%{
#include "heading.h"
int yyerror(const char* s);
int yylex(void);
stringstream *all_code;
FILE * myin;
void print_test(string output);
void print_test(stringstream o);
string gen_code(string *res, string op, string *val1, string *val2);
string to_string(char* s);
string to_string(int s);
int tempi = 0;
int templ = 0;
string * new_temp();
string * new_label();
string go_to(string *s);
string dec_label(string *s);
string dec_temp(string *s);
void expression_code( Terminal &DD,  Terminal D2, Terminal D3,string op);
bool success = true;
bool no_main = false;
void push_map(string name, Var v);
bool check_map(string name);
void check_map_dec(string name);

map<string,Var> var_map;
stack<Loop> loop_stack;

%}

%union{
    int       int_val;
    char str_val[256];

    struct {
        stringstream *code;
    }NonTerminal;

    struct Terminal Terminal;

}

%error-verbose
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF 
%token IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE 
%token READ WRITE RETURN
%token AND OR NOT TRUE FALSE 
%token SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE 
%token SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token NUMBER IDENT

%type <int_val> NUMBER
%type <str_val> IDENT


%type <NonTerminal> program
%type <Terminal> decLoop statementLoop function function2 declaration declaration2 declaration3 statement  statement1 statement2   statement21 statement3   statement4   statement5   statement51  statement6   statement61  boolExpr      boolExpr2     rel&Expr   rel&Expr2  relExpr   relExprs comp          expression    expression2  multExpr     multExpr2   term          term2        term3        term31       term32       var           var2         bLoop bFunc


%%

program:    function program {
                $$.code = $1.code;
                *($$.code) << $2.code->str();
                if(!no_main){
                    yyerror("ERROR: main function not defined.");
                }

                all_code = $$.code;
              } 
            | {
                $$.code = new stringstream();
              }
            ;

function:   FUNCTION bFunc SEMICOLON BEGIN_PARAMS decLoop END_PARAMS BEGIN_LOCALS decLoop END_LOCALS BEGIN_BODY statement SEMICOLON function2 {
                $$.code = new stringstream(); 
                string tmp = *$2.place;
                if( tmp.compare("main") == 0){
                    no_main = true;
                }
                *($$.code)  << "func " << tmp << "\n" << $5.code->str() << $8.code->str();
                for(int i = 0; i < $5.vars->size(); ++i){
                    if((*$5.vars)[i].type == INT_ARR){
                        yyerror("Error: cannot pass arrays to function.");
                    }
                    else if((*$5.vars)[i].type == INT){
                        *($$.code) << "= " << *((*$5.vars)[i].place) << ", " << "$"<< to_string(i) << "\n";
                    }else{
                        yyerror("Error: invalid type");
                    }
                }
                 *($$.code) << $11.code->str() << $13.code->str();
            }
            ;
bFunc: IDENT {
            string tmp = $1;
            Var myf = Var();
            myf.type = FUNC;
            if(!check_map(tmp)){
                push_map(tmp,myf); 
            }
            $$.place = new string();
            *$$.place = tmp;
        };

function2: statement SEMICOLON function2 {
                $$.code = $1.code;
                *($$.code) << $3.code->str();
              } 
            | END_BODY {
                $$.code = new stringstream();
                *($$.code) << "endfunc\n";
              }
            ;

decLoop:  declaration SEMICOLON decLoop {
                $$.code = $1.code;
                $$.vars = $1.vars;
                for( int i = 0; i < $3.vars->size(); ++i){
                    $$.vars->push_back((*$3.vars)[i]);
                }
                *($$.code) << $3.code->str();
                } 
            | {
                $$.code = new stringstream();
                $$.vars = new vector<Var>();
              }
            ;

statementLoop:  statement SEMICOLON statementLoop {
                $$.code = $1.code;
                *($$.code) << $3.code->str();
              } 
            | {
                $$.code = new stringstream();
              }
            ;

declaration:    IDENT declaration2 {
                    $$.code = $2.code;
                    $$.type = $2.type;
                    $$.length = $2.length;

                    $$.vars = $2.vars;
                    Var v = Var();
                    v.type = $2.type;
                    v.length = $2.length;
                    v.place = new string();
                    *v.place = $1;
                    $$.vars->push_back(v);
                    if($2.type == INT_ARR){
                        if($2.length <= 0){
                            yyerror("ERROR: invalid array size <= 0");
                        }
                        *($$.code) << ".[] " << $1 << ", " << $2.length << "\n";
                        string s = $1;
                        if(!check_map(s)){
                            push_map(s,v);
                        }
                        else{
                            string tmp = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tmp.c_str());
                        }
                    }

                    else if($2.type == INT){
                        *($$.code) << ". " << $1 << "\n";
                        string s = $1;
                        if(!check_map(s)){
                            push_map(s,v);
                        }
                        else{
                            string tmp = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tmp.c_str());
                        }
                    }else{
                            yyerror("ERROR: invalid type");
                    }

                }
                ;

declaration2:  COMMA IDENT declaration2 {
                    $$.code = $3.code;
                    $$.type = $3.type;
                    $$.length = $3.length;
                    $$.vars = $3.vars;
                    Var v = Var();
                    v.type = $3.type;
                    v.length = $3.length;
                    v.place = new string();
                    *v.place = $2;
                    $$.vars->push_back(v);
                    if($3.type == INT_ARR){
                        *($$.code) << ".[] " << $2 << ", " << $3.length << "\n";
                        string s = $2;
                        if(!check_map(s)){
                            push_map(s,v);
                        }
                        else{
                            string tmp = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tmp.c_str());
                        }
                    }
                    else if($3.type == INT){
                        *($$.code) << ". " << $2 << "\n";
                        string s = $2;
                        if(!check_map(s)){
                            push_map(s,v);
                        }
                        else{
                            string tmp = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tmp.c_str());
                        }
                    }
                }
                | COLON declaration3 INTEGER {
                    $$.code = $2.code;
                    $$.type = $2.type;
                    $$.length = $2.length;
                    $$.vars = $2.vars;
                }
                ;

declaration3:  ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF{
                    $$.code = new stringstream();
                    $$.vars = new vector<Var>();
                    $$.type = INT_ARR;
                    $$.length = $3;
                }
                | {
                    $$.code = new stringstream();
                    $$.vars = new vector<Var>();
                    $$.type = INT;
                    $$.length = 0;
                  }
                ;

statement:      statement1 {
                    $$.code = $1.code;
                }
                | statement2 {
                    $$.code = $1.code;
                }
                | statement3 {
                    $$.code = $1.code;
                }
                | statement4 {
                    $$.code = $1.code;
                }
                | statement5 {
                    $$.code = $1.code;
                }
                | statement6 {
                    $$.code = $1.code;
                }
                | CONTINUE{
                    $$.code = new stringstream();
                    if(loop_stack.size() <= 0){
                        yyerror("ERROR: continue statement not within a loop");
                    }
                    else{
                        Loop l = loop_stack.top();
                        *($$.code) << ":= " << *l.parent << "\n";
                    }
                }
                | RETURN expression{
                    $$.code = $2.code;
                    $$.place = $2.place;
                    *($$.code) << "ret " << *$$.place << "\n";
                }

statement1:    var ASSIGN expression{
                    $$.code = $1.code;
                    *($$.code) << $3.code->str();
                    if($1.type == INT && $3.type == INT){
                       *($$.code) << "= " << *$1.place << ", " << *$3.place << "\n";
                    }
                    else if($1.type == INT && $3.type == INT_ARR){
                        *($$.code) << gen_code($1.place, "=[]", $3.place, $3.index);
                    }
                    else if($1.type == INT_ARR && $3.type == INT && $1.value != NULL){
                        *($$.code) << gen_code($1.value, "[]=", $1.index, $3.place);
                    }
                    else if($1.type == INT_ARR && $3.type == INT_ARR){
                        string *tmp = new_temp();
                        *($$.code) << dec_temp(tmp) << gen_code(tmp, "=[]", $3.place, $3.index);
                        *($$.code) << gen_code($1.value, "[]=", $1.index, tmp);
                    }
                    else{
                        yyerror("Error: expression is null.");
                    }
                }
                ;

statement2:    IF boolExpr THEN statementLoop statement21 ENDIF{
                    $$.code = new stringstream();
                    $$.begin = new_label();
                    $$.end = new_label();
                    *($$.code) << $2.code->str() << "?:= " << *$$.begin << ", " <<  *$2.place << "\n";
                    if($5.begin != NULL){                       
                        *($$.code) << go_to($5.begin); 
                        *($$.code) << dec_label($$.begin)  << $4.code->str() << go_to($$.end);
                        *($$.code) << dec_label($5.begin) << $5.code->str();
                    }
                    else{
                        *($$.code) << go_to($$.end)<< dec_label($$.begin)  << $4.code->str();
                    }
                    *($$.code) << dec_label($$.end);
                }
                ;

statement21:   {
                    $$.code = new stringstream();
                    $$.begin = NULL;
                }
                | ELSE statementLoop{
                    $$.code = $2.code;
                    $$.begin = new_label();
                }
                ;

statement3:    WHILE boolExpr bLoop BEGINLOOP statementLoop ENDLOOP{
                    $$.code = new stringstream();
                    $$.begin = $3.begin;
                    $$.parent = $3.parent;
                    $$.end = $3.end;
                    *($$.code) << dec_label($$.parent) << $2.code->str() << "?:= " << *$$.begin << ", " << *$2.place << "\n" 
                    << go_to($$.end) << dec_label($$.begin) << $5.code->str() << go_to($$.parent) << dec_label($$.end);
                    loop_stack.pop();

                }
                ;

bLoop:         {
                    $$.code = new stringstream();
                    $$.begin = new_label();
                    $$.parent = new_label();
                    $$.end = new_label();
                    Loop l = Loop();
                    l.parent = $$.parent;
                    l.begin = $$.begin;
                    l.end = $$.end;
                    loop_stack.push(l);
                };

statement4:    DO bLoop BEGINLOOP statementLoop ENDLOOP WHILE boolExpr{
                    $$.code = new stringstream();
                    $$.begin = $2.begin;
                    $$.parent = $2.parent;
                    $$.end = $2.end;
                    *($$.code) << dec_label($$.begin) << $4.code->str() << dec_label($$.parent) << $7.code->str() << "?:= " << *$$.begin << ", " << *$7.place << "\n" << dec_label($$.end);
                    loop_stack.pop();
                }
                ;

statement5:    READ var statement51{
                    $$.code = $2.code;
                    if($2.type == INT){
                       *($$.code) << ".< " << *$2.place << "\n"; 
                    }
                    else{
                       *($$.code) << ".[]< " << *$2.place << ", " << $2.index << "\n"; 
                    }
                    *($$.code) << $3.code->str();
                }
                ;

statement51:   COMMA var statement51 {
                    $$.code = $2.code;
                    if($2.type == INT){
                       *($$.code) << ".< " << *$2.place << "\n"; 
                    }
                    else{
                       *($$.code) << ".[]< " << *$2.place << ", " << $2.index << "\n"; 
                    }
                    *($$.code) << $3.code->str();
                }
                | {
                    $$.code = new stringstream();
                  }
                ;

statement6:    WRITE var statement61{
                    $$.code = $2.code;
                    if($2.type == INT){
                       *($$.code) << ".> " << *$2.place << "\n"; 
                    }
                    else{
                       *($$.code) << ".[]> " << *$2.value << ", " << *$2.index << "\n"; 
                    }
                    *($$.code) << $3.code->str();
                  }
                ;

statement61:   COMMA var statement61{
                    $$.code = $2.code;
                    if($2.type == INT){
                       *($$.code) << ".> " << *$2.place << "\n"; 
                    }
                    else{
                       *($$.code) << ".[]> " << *$2.value << ", " << *$2.index << "\n"; 
                    }
                    *($$.code) << $3.code->str();
                  }
                |{
                    $$.code = new stringstream();
                 }
                ;

boolExpr:       rel&Expr boolExpr2{
                    $$.code = $1.code;
                    *($$.code) << $2.code->str();
                    if($2.op != NULL && $2.place != NULL)
                    {                        
                        $$.place = new_temp();
                       *($$.code) << dec_temp($$.place) << gen_code($$.place, *$2.op, $1.place, $2.place);
                    }
                    else{
                        $$.place = $1.place;
                        $$.op = $1.op;
                    }
                }
                ;

boolExpr2:      OR rel&Expr boolExpr2{
                    expression_code($$,$2,$3,"||");


                }
                |{
                    $$.code = new stringstream();
                    $$.op = NULL;
                 }
                ; 

rel&Expr:    relExpr rel&Expr2{
                    $$.code = $1.code;
                    *($$.code) << $2.code->str();
                    if($2.op != NULL && $2.place != NULL)
                    {                        
                        $$.place = new_temp();
                       *($$.code) << dec_temp($$.place) << gen_code($$.place, *$2.op, $1.place, $2.place);
                    }
                    else{
                        $$.place = $1.place;
                        $$.op = $1.op;
                    }
                }
                ;

rel&Expr2:   AND relExpr rel&Expr2{
                    expression_code($$,$2,$3,"&&");

                }
                |{
                    $$.code = new stringstream();
                    $$.op = NULL;
                 }
                ;

relExpr:   relExprs{
                    $$.code = $1.code;
                    $$.place = $1.place; 
                }
                | NOT relExprs{
                    $$.code = $2.code;
                    $$.place = new_temp();
                    *($$.code) << dec_temp($$.place) << gen_code($$.place, "!", $2.place, NULL);
                }
                ;

relExprs: expression comp expression{
                    $$.code = $1.code;
                    *($$.code) << $2.code->str();
                    *($$.code) << $3.code->str();
                    $$.place = new_temp();
                    *($$.code)<< dec_temp($$.place) << gen_code($$.place, *$2.op, $1.place, $3.place);
                }
                | TRUE{                    
                    $$.code = new stringstream();
                    $$.place = new string();
                    *$$.place = "1";
                    }
                | FALSE{
                    $$.code = new stringstream();
                    $$.place = new string();
                    *$$.place = "0";
                  }
                | L_PAREN boolExpr R_PAREN{
                    $$.code = $2.code;
                    $$.place = $2.place;
                }
                ;

comp:           EQ{
                    $$.code = new stringstream();
                    $$.op = new string();
                    *$$.op = "==";
                  }
                | NEQ{
                    $$.code = new stringstream();
                    $$.op = new string();
                    *$$.op = "!=";
                  }
                | LT{
                    $$.code = new stringstream();
                    $$.op = new string();
                    *$$.op = "<";
                  }
                | GT{
                    $$.code = new stringstream();
                    $$.op = new string();
                    *$$.op = ">";
                  }
                | LTE{
                    $$.code = new stringstream();
                    $$.op = new string();
                    *$$.op = "<=";
                  }
                | GTE{
                    $$.code = new stringstream();
                    $$.op = new string();
                    *$$.op = ">=";
                  }
                ;

expression:     multExpr expression2{
                    $$.code = $1.code;
                    *($$.code) << $2.code->str();
                    if($2.op != NULL && $2.place != NULL)
                    {                        
                        $$.place = new_temp();
                       *($$.code)<< dec_temp($$.place) << gen_code($$.place, *$2.op, $1.place, $2.place);
                    }
                    else{
                        $$.place = $1.place;
                        $$.op = $1.op;
                    }
                    $$.type = INT;
                  }
                ;

expression2:   ADD multExpr expression2 {
                    expression_code($$,$2,$3,"+");
                  }
                | SUB multExpr expression2{
                    expression_code($$,$2,$3,"-");
                  }
                | {
                    $$.code = new stringstream();
                    $$.op = NULL;
                  }
                ;

multExpr:      term multExpr2{
                    $$.code = $1.code;
                    *($$.code) << $2.code->str();
                    if($2.op != NULL && $2.place != NULL)
                    {                        
                        $$.place = new_temp();
                       *($$.code)<< dec_temp($$.place)<< gen_code($$.place, *$2.op, $1.place, $2.place);
                    }
                    else{
                        $$.place = $1.place;
                        $$.op = $1.op;
                    }
                  }
                ;


multExpr2:    MULT term multExpr2{
                    expression_code($$,$2,$3,"*");

                  }
                | DIV term multExpr2{
                    expression_code($$,$2,$3,"/");
                  }
                | MOD term multExpr2{
                    expression_code($$,$2,$3,"%");
                  }
                |{
                    $$.code = new stringstream();
                    $$.op = NULL;
                 }
                ;

term:           SUB term2{
                    $$.code = $2.code;
                    $$.place = new_temp();
                    string tmp = "-1";
                    *($$.code)<< dec_temp($$.place) << gen_code($$.place, "*",$2.place, &tmp );
                  }
                | term2{
                    $$.code = $1.code;
                    $$.place = $1.place;
                  }
                | term3{
                    $$.code = $1.code;
                    $$.place = $1.place;
                  }
                ;

term2:         var{
                    $$.code = $1.code;
                    $$.place= $1.place;
                    $$.index = $1.index;
                  }
                | NUMBER{
                    $$.code = new stringstream();
                    $$.place = new string();
                    *$$.place = to_string($1);
                  }
                | L_PAREN expression R_PAREN{
                    $$.code = $2.code;
                    $$.place = $2.place;
                  }
                ;

term3:         IDENT L_PAREN term31 R_PAREN{
                    $$.code = $3.code;
                    $$.place = new_temp();
                    *($$.code) << dec_temp($$.place)<< "call " << $1 << ", " << *$$.place << "\n";
                    string tmp = $1;
                    check_map_dec(tmp);
                }
                ;

term31:        expression term32{
                    $$.code = $1.code;
                    *($$.code) << $2.code->str();
                    *($$.code) << "param " << *$1.place << "\n";
                } 
                | {
                    $$.code = new stringstream(); 
                  }
                ;
term32:        COMMA term31{
                    $$.code = $2.code;
                } 
                | {
                    $$.code = new stringstream();
                  }

var:            IDENT var2{
                    $$.code = $2.code;
                    $$.type = $2.type;
                    string tmp = $1;
                    check_map_dec(tmp);
                    if(check_map(tmp) && var_map[tmp].type != $2.type){
                        if($2.type == INT_ARR){
                            string output ="Error: used variable \"" + tmp + "\" is not an array.";
                            yyerror(output.c_str());
                        }
                        else if($2.type == INT){
                            string output ="Error: used array variable \"" + tmp + "\" is missing a specified index.";
                            yyerror(output.c_str());
                        }
                    }

                    if($2.index == NULL){
                        $$.place = new string();
                        *$$.place = $1;
                    }
                    else{
                        $$.index = $2.index;
                        $$.place = new_temp();
                        string* tmp = new string();
                        *tmp = $1;
                        *($$.code) << dec_temp($$.place) << gen_code($$.place, "=[]", tmp,$2.index);
                        $$.value = new string();
                        *$$.value = $1;
                    }
                }
                ;

var2:          L_SQUARE_BRACKET expression R_SQUARE_BRACKET{
                    $$.code = $2.code;
                    $$.place = NULL;
                    $$.index = $2.place;
                    $$.type = INT_ARR;
                }
                |{
                    $$.code = new stringstream();
                    $$.index = NULL;
                    $$.place = NULL;
                    $$.type = INT;
                 }
                ;
            
%%


string gen_code(string *res, string op, string *val1, string *val2){
    if(op == "!"){
        return op + " " + *res + ", " + *val1 + "\n";
    }
    else{
        return op + " " + *res + ", " + *val1 + ", "+ *val2 +"\n";
    }
}

string to_string(char* s){
    ostringstream c;
    c << s;
    return c.str();
}

string to_string(int s){
    ostringstream c;
    c << s;
    return c.str();
}
string go_to(string *s){
    return ":= "+ *s + "\n"; 
}
string dec_label(string *s){
    return ": " +*s + "\n"; 
}
string dec_temp(string *s){
    return ". " +*s + "\n"; 
}
string * new_temp(){
    string * t = new string();
    ostringstream conv;
    conv << tempi;
    *t = "__temp__"+ conv.str();
    tempi++;
    return t;
}
string * new_label(){
    string * t = new string();
    ostringstream conv;
    conv << templ;
    *t = "__label__"+ conv.str();
    templ++;
    return t;
}
 
void expression_code( Terminal &DD, Terminal D2, Terminal D3, string op){
    DD.code = D2.code;
    *(DD.code) << D3.code->str();
    if(D3.op == NULL){
        DD.place = D2.place;
        DD.op = new string();
        *DD.op = op;
    }
    else{
        DD.place = new_temp();
        DD.op = new string();
        *DD.op = op;

        *(DD.code) << dec_temp(DD.place)<< gen_code(DD.place , *D3.op, D2.place, D3.place);
    } 
}


void push_map(string name, Var v){
    if(var_map.find(name) == var_map.end()){
        var_map[name] = v;
    }
    else{
        string tmp = "ERROR: " + name + " already exists";
        yyerror(tmp.c_str());
    }
}
bool check_map(string name){
    if(var_map.find(name) == var_map.end()){
        return false;
    }
    return true;
}
void check_map_dec(string name){
    if(!check_map(name)){
        string tmp = "ERROR: \"" + name + "\" does not exist";
        yyerror(tmp.c_str());
    }
}

int yyerror(const char *s)
{
    extern int line_cnt;
    extern int cursor_pos;
    success = false;
    printf(">>> Line %d, position %d: %s\n",line_cnt,cursor_pos,s);
    return -1;
}


int main(int argc, char **argv) {

    if ( (argc > 1) && (myin = fopen(argv[1],"r")) == NULL){
        printf("syntax: %s filename\n", argv[0]);
        return 1;
    }
    yyparse();

    if(success){
        ofstream file;
        file.open("mil_code.mil");
        file << all_code->str();
        file.close();
    }
    else{
        cout << "***Errors exist, fix to compile code***" << endl;
    }

    return 0;
}