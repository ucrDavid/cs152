/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FUNCTION = 258,
     BEGIN_PARAMS = 259,
     END_PARAMS = 260,
     BEGIN_LOCALS = 261,
     END_LOCALS = 262,
     BEGIN_BODY = 263,
     END_BODY = 264,
     INTEGER = 265,
     ARRAY = 266,
     OF = 267,
     IF = 268,
     THEN = 269,
     ENDIF = 270,
     ELSE = 271,
     WHILE = 272,
     DO = 273,
     BEGINLOOP = 274,
     ENDLOOP = 275,
     CONTINUE = 276,
     READ = 277,
     WRITE = 278,
     AND = 279,
     OR = 280,
     NOT = 281,
     TRUE = 282,
     FALSE = 283,
     RETURN = 284,
     IDENT = 285,
     COLON = 286,
     SEMICOLON = 287,
     COMMA = 288,
     NUMBER = 289,
     ASSIGN = 290,
     NEQ = 291,
     EQ = 292,
     GTE = 293,
     GT = 294,
     LTE = 295,
     LT = 296,
     SUB = 297,
     ADD = 298,
     MOD = 299,
     DIV = 300,
     MULT = 301,
     UMINUS = 302,
     L_SQUARE_BRACKET = 303,
     R_SQUARE_BRACKET = 304,
     L_PAREN = 305,
     R_PAREN = 306
   };
#endif
/* Tokens.  */
#define FUNCTION 258
#define BEGIN_PARAMS 259
#define END_PARAMS 260
#define BEGIN_LOCALS 261
#define END_LOCALS 262
#define BEGIN_BODY 263
#define END_BODY 264
#define INTEGER 265
#define ARRAY 266
#define OF 267
#define IF 268
#define THEN 269
#define ENDIF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define BEGINLOOP 274
#define ENDLOOP 275
#define CONTINUE 276
#define READ 277
#define WRITE 278
#define AND 279
#define OR 280
#define NOT 281
#define TRUE 282
#define FALSE 283
#define RETURN 284
#define IDENT 285
#define COLON 286
#define SEMICOLON 287
#define COMMA 288
#define NUMBER 289
#define ASSIGN 290
#define NEQ 291
#define EQ 292
#define GTE 293
#define GT 294
#define LTE 295
#define LT 296
#define SUB 297
#define ADD 298
#define MOD 299
#define DIV 300
#define MULT 301
#define UMINUS 302
#define L_SQUARE_BRACKET 303
#define R_SQUARE_BRACKET 304
#define L_PAREN 305
#define R_PAREN 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "mini_l.y"
{
    string *myString;
    int myInt;
    arr_struct *my_arr_struct;
}
/* Line 1529 of yacc.c.  */
#line 157 "mini_l.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

