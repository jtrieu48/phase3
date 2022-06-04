/* heading.h */
#ifndef _heading_h_
#define _heading_h_

#define YY_NO_UNPUT

#include <iostream>

/*data structures*/
#include <vector>
#include <stack>
#include <map>


#include <sstream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

enum Type {INT,INT_ARR,FUNC};

    struct Var{
        
        string *place;
        string *value;
        string *offset;
        //vector
        Type type;
        int length;
        string *index;
    } ;

    struct Loop{
        string *begin;
        string *parent;
        string *end;
    };


    struct Terminal{
       stringstream *code;
       //location
       string *place;
       string *value;
       string *offset;
       // branches
       string *op;
       string *begin;
       string *parent;
       string *end;
       // type
       //uint val;
       Type type;
       int length;
       string *index;
       // idents and vars
       vector<string> *ids;
       vector<Var> *vars; 
    };


#endif