%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "header.h"
 
 extern int currLine;
 extern int currPos;
 extern char* yytext;     // defined and maintained in lex.c
 extern int yylex();
 extern void yyerror(char *);
 extern void yyerror(string);
%}

%union {
    string *myString;
    int myInt;
}

//start symbol
%start program

%type <myString> program
%type <myString> functions
%type <myString> function
%type <myString> declaration
%type <myString> declarations
%type <myString> statement
%type <myString> statements
%type <myString> bool_expr
%type <myString> relation_and_expr
%type <myString> relation_expr
%type <myString> comp
%type <myString> expression
%type <myString> expressions
%type <myString> multiplicative_expr
%type <myString> terms
%type <myString> term
%type <myString> var
%type <myString> vars
%type <myString> idents

%type <myString> bool_expressions
%type <myString> relation_and_expressions
%type <myString> expression_loop

%token <myString> FUNCTION
%token <myString> BEGIN_PARAMS
%token <myString> END_PARAMS
%token <myString> BEGIN_LOCALS
%token <myString> END_LOCALS
%token <myString> BEGIN_BODY
%token <myString> END_BODY
%token <myString> INTEGER
%token <myString> ARRAY
%token <myString> OF
%token <myString> IF
%token <myString> THEN
%token <myString> ENDIF
%token <myString> ELSE
%token <myString> WHILE
%token <myString> DO
%token <myString> BEGINLOOP
%token <myString> ENDLOOP
%token <myString> CONTINUE
%token <myString> READ
%token <myString> WRITE
%token <myString> AND
%token <myString> OR
%token <myString> NOT
%token <myString> TRUE
%token <myString> FALSE
%token <myString> RETURN
%token <myString> IDENT
%token <myString> COLON
%token <myString> SEMICOLON
%token <myString> COMMA
%token <myString> NUMBER

// %printer {f/*printf(yyoutput, "'%c'", $$); } <myString>


%right      ASSIGN
%left       OR
%left       AND
%right      NOT
%left       NEQ
%left       EQ
%left       GTE
%left       GT
%left       LTE
%left       LT
%left       SUB
%left       ADD
%left       MOD
%left       DIV
%left       MULT
%nonassoc   UMINUS
%left       L_SQUARE_BRACKET
%left       R_SQUARE_BRACKET
%left       L_PAREN
%left       R_PAREN



%% 
program:            functions                {/*printf("program -> functions\n");*/} 
		        ;

functions:          /* empty */              {/*printf("functions -> epsilon\n");*/}
                |   function functions       
                        {
                        // /*printf("functions -> function functions\n");*/
                            // print($1);
                        }
                ;

function:           FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statement SEMICOLON statements END_BODY  
                        {
                            /*printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS
                            BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statement SEMICOLON statements END_BODY\n");*/
                            // funcName($2);
                            print($5);
                        }
                ;

declarations:       /* empty */                         {/*printf("declarations -> epsilon\n");*/}
                |   declaration SEMICOLON declarations  {/*printf("declarations -> declaration SEMICOLON declarations\n");*/ $$ = $1;}
                ;

declaration:        IDENT idents COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER   
                        {/*printf("delcaration -> IDENT idents COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");*/}
                |   IDENT idents COLON INTEGER                                                     
                        {/*printf("declaration -> IDENT idents COLON INTEGER\n");*/ $$ = addTable($1);}
                ;

idents:             /* empty */         {/*printf("idents -> epsilon\n");*/}
                |   COMMA IDENT idents  {/*printf("idents -> COMMA IDENT idents\n");*/}
                ;

statements:         /* empty */                     {/*printf("statements -> epsilon\n");*/}
                |   statement SEMICOLON statements  {/*printf("statements -> statement SEMICOLON statements\n");*/}
                ;

statement:          var ASSIGN expression                                                                       
                        {/*printf("statement -> var ASSIGN expression\n");*/}
                |   IF bool_expr THEN statement SEMICOLON statements ENDIF                                      
                        {/*printf("statement -> IF bool_expr THEN statement SEMICOLON statements ENDIF\n");*/ }
                |   IF bool_expr THEN statement SEMICOLON statements ELSE statement SEMICOLON statements ENDIF  
                        {/*printf("statement -> IF bool_expr THEN statement SEMICOLON statements ELSE statement SEMICOLON statements ENDIF\n");*/}
                |   WHILE bool_expr BEGINLOOP statement SEMICOLON statements ENDLOOP                            
                        {/*printf("statement -> WHILE bool_expr BEGINLOOP statement SEMICOLON statements ENDLOOP\n");*/}
                |   DO BEGINLOOP statement SEMICOLON statements ENDLOOP WHILE bool_expr                         
                        {/*printf("statement -> DO BEGINLOOP statement SEMICOLON statements ENDLOOP WHILE bool_expr\n");*/ }
                |   READ var vars                                                                               
                        {/*printf("statement ->  READ var vars\n");*/}
                |   WRITE var vars                                                                              
                        {/*printf("statement -> WRITE var vars\n");*/}
                |   CONTINUE                                                                                    
                        {/*printf("statement -> CONTINUE\n");*/}
                |   RETURN expression                                                                           
                        {/*printf("statement -> RETURN expression\n");*/}
                ;

bool_expr:          relation_and_expr bool_expressions                 {/*printf("bool_expr -> relation_and_expr bool_expressions\n");*/}
                ;

bool_expressions:   /* empty */                                         {/*printf("bool_expressions -> epsilon\n");*/}
                |   OR relation_and_expr bool_expressions               {/*printf("bool_expressions -> OR relation_and_expr bool_expressions\n");*/}
                ;

relation_and_expr:      relation_expr relation_and_expressions          {/*printf("relation_and_expr -> relation_expr relation_and_expressions\n");*/}
                    ;

relation_and_expressions:   /* empty */                                 {/*printf("relation_and_expressions -> epsilon\n");*/}
                        |   AND relation_expr relation_and_expressions  {/*printf("relation_and_expressions -> AND relation_expr relation_and_expressions\n");*/}
                        ;
relation_expr:              expression comp expression      {/*printf("relation_expr -> expression comp expression\n");*/}
                        |   TRUE                            {/*printf("relation_expr -> TRUE\n");*/}
                        |   FALSE                           {/*printf("relation_expr -> FALSE\n");*/}
                        |   L_PAREN bool_expr R_PAREN       {/*printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");*/}
                        |   NOT expression comp expression  {/*printf("relation_expr -> NOT expression comp expression\n");*/}
                        |   NOT TRUE                        {/*printf("relation_expr -> NOT TRUE\n");*/}
                        |   NOT FALSE                       {/*printf("relation_expr -> NOT FALSE\n");*/}
                        |   NOT L_PAREN bool_expr R_PAREN   {/*printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");*/}
                        ;

comp:               EQ      {/*printf("comp -> EQ\n");*/}
                |   NEQ     {/*printf("comp -> NEQ\n");*/}
                |   LT      {/*printf("comp -> LT\n");*/}
                |   GT      {/*printf("comp -> GT\n");*/}
                |   LTE     {/*printf("comp -> LTE\n");*/}
                |   GTE     {/*printf("comp -> GTE\n");*/}
                ;

expression:         multiplicative_expr expression_loop         {/*printf("expression -> multiplicative_expr expression_loop\n");*/}
                ;

expression_loop:    /* empty */                                 {/*printf("expression_loop -> epsilon\n");*/}
                |   ADD multiplicative_expr expression_loop     {/*printf("expression_loop -> ADD multiplicative_expr expression_loop\n");*/}
                |   SUB  multiplicative_expr expression_loop    {/*printf("expression_loop -> SUB  multiplicative_expr expression_loop\n");*/}
                ;


expressions:        expression COMMA expressions    {/*printf("expressions -> expression COMMA expressions\n");*/}
                |   expression                      {/*printf("expressions -> expression\n");*/}
                |   /* empty */                     {/*printf("expressions -> epsilon\n");*/}
                ;

terms:              /* empty */             {/*printf("terms -> epsilon\n");*/}
                |   MOD term terms          {/*printf("terms -> MOD term terms\n");*/}
                |   DIV term terms          {/*printf("terms -> DIV term terms\n");*/}
                |   MULT term terms         {/*printf("terms -> MULT term terms\n");*/}
                ;

multiplicative_expr:        term terms      {/*printf("multiplicative_expr -> term terms\n");*/}
                        ;

term:               IDENT L_PAREN expressions R_PAREN   {/*printf("term -> IDENT L_PAREN expressions R_PAREN\n");*/}
                |   NUMBER                              {/*printf("term -> NUMBER\n");*/}
                |   var                                 {/*printf("term -> var\n");*/}
                |   L_PAREN expression R_PAREN          {/*printf("term -> L_PAREN expression R_PAREN\n");*/}
                |   SUB NUMBER                          {/*printf("term -> SUB NUMBER\n");*/}
                |   SUB var                             {/*printf("term -> SUB var\n");*/}
                |   SUB L_PAREN expression R_PAREN      {/*printf("term -> SUB L_PAREN expression R_PAREN\n");*/}
                ;

var:                IDENT                                                 {/*printf("var -> IDENT\n");*/}
                |   IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET    {/*printf("var -> IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");*/ }
                ;

vars:               /* empty */                 {/*printf("vars -> epsilon\n");*/}
                |   COMMA var vars              {/*printf("vars -> COMMA var vars \n");*/}
                ;

%%


void yyerror( string s ) {  // error handler routine
  extern int  yylineno;    // defined and maintained in lex.c
  extern char* yytext;     // defined and maintained in lex.c
  cerr << "ERROR: " << s << " at symbol \"" << yytext;
  cerr << "\" on line " << currLine << " column " << currPos << endl;
  exit( 1 );
}

void yyerror( char* s ) { yyerror( string(s) ); }
