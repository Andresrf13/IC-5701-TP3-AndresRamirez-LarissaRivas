/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
     T_URL = 258,
     T_NUM = 259,
     T_ENTER = 260,
     T_SPACE = 261,
     T_COMMENT_IN = 262,
     T_COMMENT_END = 263,
     T_CDATA_I = 264,
     T_CDATA_F = 265,
     CONT_DATA = 266,
     T_XMLDEC = 267,
     T_F_XMLDEC = 268,
     T_EQ = 269,
     T_ENCOD = 270,
     T_ENDID = 271,
     T_VNUMBER = 272,
     T_VS = 273,
     T_DOCTYPE = 274,
     T_SYSTEM = 275,
     T_PULIC = 276,
     T_NAME = 277,
     T_ENDDOCTYPE = 278,
     T_PUBIDLIT = 279,
     T_SYSTLIT = 280,
     T_ETAG = 281,
     T_TAG = 282,
     T_FTAG = 283,
     T_ESTAG = 284,
     T_CONTENT = 285,
     T_ATRIBUTO = 286,
     T_FIN_ETAG = 287,
     T_FIN_STAG = 288,
     T_CONTENIDO = 289
   };
#endif
/* Tokens.  */
#define T_URL 258
#define T_NUM 259
#define T_ENTER 260
#define T_SPACE 261
#define T_COMMENT_IN 262
#define T_COMMENT_END 263
#define T_CDATA_I 264
#define T_CDATA_F 265
#define CONT_DATA 266
#define T_XMLDEC 267
#define T_F_XMLDEC 268
#define T_EQ 269
#define T_ENCOD 270
#define T_ENDID 271
#define T_VNUMBER 272
#define T_VS 273
#define T_DOCTYPE 274
#define T_SYSTEM 275
#define T_PULIC 276
#define T_NAME 277
#define T_ENDDOCTYPE 278
#define T_PUBIDLIT 279
#define T_SYSTLIT 280
#define T_ETAG 281
#define T_TAG 282
#define T_FTAG 283
#define T_ESTAG 284
#define T_CONTENT 285
#define T_ATRIBUTO 286
#define T_FIN_ETAG 287
#define T_FIN_STAG 288
#define T_CONTENIDO 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 14 "parser.y"

  char *contenido;  
  struct Nodo *node;



/* Line 2068 of yacc.c  */
#line 125 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;

