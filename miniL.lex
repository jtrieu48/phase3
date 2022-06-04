   /* cs152-miniL */

/* 
 * Description: Recognize the 32-bit hexadecimal integer from stdin
 * Pattern: 0[xX]([0-9a-fA-F]{1,8})
yyleng
IDENT_VAR_ERR	()({LETTER}|{DIGIT}|[_])*[_]+
 */

%{
#include "heading.h"
#include "y.tab.h"
#include <string.h>

	int line_cnt = 1;
	int cursor_pos = 1;
%}

DIGIT		    [0-9]
LETTER  	    [a-zA-Z]
COMMENT		    ##.*
IDENT_VAR	    {LETTER}({LETTER}|{DIGIT}|[_])*(({LETTER}|{DIGIT})+)*
IDENT_DIG	    {DIGIT}+
IDENT_ERR_START ({DIGIT}|[_])({LETTER}|{DIGIT}|[_])*(({LETTER}|{DIGIT})+)*
IDENT_ERR_END	{LETTER}({LETTER}|{DIGIT}|[_])*([_])+

%%
[ \t]+ 		        cursor_pos += yyleng;
\n 		            ++line_cnt;cursor_pos=1;
{COMMENT}	        
function 	        return(FUNCTION);cursor_pos += yyleng;
beginparams	        return(BEGIN_PARAMS);cursor_pos += yyleng;
endparams	        return(END_PARAMS);cursor_pos += yyleng;
beginlocals	        return(BEGIN_LOCALS);cursor_pos += yyleng;
endlocals	        return(END_LOCALS);cursor_pos += yyleng;
beginbody	        return(BEGIN_BODY);cursor_pos += yyleng;
endbody		        return(END_BODY);cursor_pos += yyleng;
integer		        return(INTEGER);cursor_pos += yyleng;
array		        return(ARRAY);cursor_pos += yyleng;
of		            return(OF);cursor_pos += yyleng;
if		            return(IF);cursor_pos += yyleng;
then		        return(THEN);cursor_pos += yyleng;
endif		        return(ENDIF);cursor_pos += yyleng;
else		        return(ELSE);cursor_pos += yyleng;
while		        return(WHILE);cursor_pos += yyleng;
do		            return(DO);cursor_pos += yyleng;
beginloop	        return(BEGINLOOP);cursor_pos += yyleng;
endloop		        return(ENDLOOP);cursor_pos += yyleng;
continue	        return(CONTINUE);cursor_pos += yyleng;
read		        return(READ);cursor_pos += yyleng;
write		        return(WRITE);cursor_pos += yyleng;
and		            return(AND);cursor_pos += yyleng;
or		            return(OR);cursor_pos += yyleng;
not		            return(NOT);cursor_pos += yyleng;
true		        return(TRUE);cursor_pos += yyleng;
false		        return(FALSE);cursor_pos += yyleng;
\-		            return(SUB);cursor_pos += yyleng;
\+		            return(ADD);cursor_pos += yyleng;
\*		            return(MULT);cursor_pos += yyleng;
\/		            return(DIV);cursor_pos += yyleng;
\%		            return(MOD);cursor_pos += yyleng;
\=\=		        return(EQ);cursor_pos += yyleng;
\<\>		        return(NEQ);cursor_pos += yyleng;
\<		            return(LT);cursor_pos += yyleng;
\>		            return(GT);cursor_pos += yyleng;
\<\=		        return(LTE);cursor_pos += yyleng;
\>\=		        return(GTE);cursor_pos += yyleng;
\;		            return(SEMICOLON);cursor_pos += yyleng;
\:		            return(COLON);cursor_pos += yyleng;
\,		            return(COMMA);cursor_pos += yyleng;
\(		            return(L_PAREN);cursor_pos += yyleng;
\)		            return(R_PAREN);cursor_pos += yyleng;
\[		            return(L_SQUARE_BRACKET);cursor_pos += yyleng;
\]		            return(R_SQUARE_BRACKET);cursor_pos += yyleng;
\:\=		        return(ASSIGN);cursor_pos += yyleng;
return              return(RETURN);cursor_pos += yyleng;
{IDENT_DIG}	        /*printf("NUMBER -> %s\n",yytext)*/;yylval.int_val = atoi(yytext); return(NUMBER); cursor_pos += yyleng; 
{IDENT_ERR_START}   printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n",line_cnt,cursor_pos,yytext);exit(0);
{IDENT_ERR_END}	    printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n",line_cnt,cursor_pos,yytext);exit(0);
{IDENT_VAR}	        /*printf("IDENT -> %s\n",yytext)*/;strcpy(yylval.str_val,yytext);return(IDENT);cursor_pos += yyleng;  
.		            printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n",line_cnt,cursor_pos,yytext);exit(0);
%%

/*
*/
//int main(int argc, char **argv)
//{
 // yylex();
//}