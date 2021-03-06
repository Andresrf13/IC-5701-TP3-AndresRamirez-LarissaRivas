%{
  #include "y.tab.h"
  int yycolumn = 1; // variable que inicializa la columna en 1 cada vez que el programa es ejecutado
  int numFila = 1, numColumna = 1;
  
  #define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;\
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn + yyleng - 1;\
    yycolumn += yyleng;\
    yylval.contenido = strdup(yytext);
  void FILACOLUMNA();
  
%}
  //utlizado para asignar informacion de la linea por donde el scanner va leyendo el token
%option yylineno 
  // cambios que realize para validar los contenidos atributos 
NUM \"[0-9]+\"|\"[0-9]+"%"\"|\'[0-9]+\'|\'[0-9]+"%"\'
    //solo puede contener [a-zA-Z][0-9] -_.!~*'();/?:@&=+,$  formato scheme://host:port/path/filename FORMATO http://tools.ietf.org/html/rfc3986#section-3.1
SCHEME [a-zA-Z]([a-zA-Z]|[0-9]|"+"|"-"|".")*
HOST ([a-zA-Z]|[0-9]|[.-])+
PORT [0-9]*
PATH ([a-zA-Z]|[0-9]|[-_.!~*'();?:@&=+,$])*
FILENAME {PATH}"."([a-zA-Z]|[0-9])*
 // fin de cambios para validar contenidos

S " "
EQ {S}*={S}*
VN 1"."[0-9]+
NAMESTCHAR (:|"_"|[a-zA-Z])
NAMECHAR ({NAMESTCHAR}|"-"|"."|[0-9])
NAME {NAMESTCHAR}({NAMECHAR})*
CONTENIDO_ATRIBUTO (\"[^<\"]*\"|'[^<\"]*')
SCRIPT \"([a-z]|[A-Z]|[0-9])*\(([a-z]|[A-Z]|[0-9]|[^\n])*\)\"
PubIDChar [0-9]|[a-zA-Z]|([-'()+,./:=?;!*#$_%]|" ")
PubIDLit "\""({PubIDChar})*"\""|'({PubIDChar})*'
SYSTLIT (\"([^"\n]*)\")|('([^\'\n]*)')
ENCNAME [a-zA-Z]([a-zA-Z]|[0-9]|"."|"_"|"-")*
ENCODNAME "\""({ENCNAME})"\""|'({ENCNAME})'
CONTENIDO_CDATA (((.)|(\n))[^\]\]>])*
ATRIBUTO "accesskey"|"class"|"contenteditable"|"contextmenu"|"dir"|"draggable"|"dropzone"|"hidden"|"id"|"inert"|"itemid"|"itemprop"|"itemref"|"itemscope"|"lang"|"spellocheck"|"style"|"tabindex"|"title"|"translate"|"version"|"xml:lang"|"xmlns"|"xmlns:xsi"|"xsi:schemaLocation"|"http-quiv"|"content"|"name"|"media"|"type"|"charset"|"href"|"hreflang"|"rel"|"rev"|"shape"|"coords"|"target"|"cite"|"alink"|"background"|bgcolor"|"text"|"vlink"|"align"|"accept-charset"|"action"|"autocomplete"|"enctype"|"method"|"novalidate"|"profile"|"noshade"|"size"|"width"|"manifest"|"alt"|"border"|"crossorigin"|"height"|"hspace"|"ismap"|"longdesc"|"src"|"usemap"|"vspace"|"autofocus"|"checked"|"disable"|"form"|"formation"|"formenctype"|"formmeter"|"formnovalidate"|"list"|"max"|"maxlength"|"min"|"multiple"|"patron"|"placeholder"|"readonly"|"required"|"step"|"value"|"sizes"|"scheme"|"archive"|"classid"|"codebase"|"codetype"|"data"|"declare"|"standby"|"compac"|"char"|"charoff"|"valign"|abbr"|"axis"|"colspan"|"headers"|"nowrap"|"rowspan"|"label"|"reversed"|"start"|"select"|"async"|"defer"|"xml:space"|"scoped"|"cellspacing"|"frame"|"rules"|"summary"|"scope"|"link"|"disabled"|"fomaction"|"formtarget"|"accept"|"scr"|"formaction"|"pattern"|"http-equiv"|"compact"|"selected"|"cellpadding"|"cols"|"rows"|"wraps"|"spellcheck"
TAG "a"|"b"|"blockquote"|"body"|"br"|"button"|"caption"|"code"|"dd"|"dir"|"div"|"dl"|"dt"|"em"|"embed"|"form"|"footer"|"frame"|"h1"|"h2"|"h3"|"h4"|"h5"|"h6"|"head"|"header"|"hr"|"html"|"img"|"input"|"1i"|"link"|"label"|"meta"|"ol"|"object"|"option"|"p"|"pre"|"span"|"summary"|"script"|"select"|"style"|"strong"|"table"|"td"|"textarea"|"th"|"title"|"tr"|"ul"


%x XMLDec 
%x DocType
%x ETags
%x ESTags
%x PubIDLit
%x SystLit
%x cDATA
%x COMENT
%x CONTENIDO 

%%


"<!--"				{FILACOLUMNA(); yylval.contenido = "<!--"; BEGIN(COMENT); return T_COMMENT_IN;} /* los comentarios valen 02 */
<COMENT>{
"--"				{error();}
((.)|(\n))			{FILACOLUMNA();}
"-->"				{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(INITIAL); return T_COMMENT_END;}
'\n'                              {FILACOLUMNA(); yycolumn =  1;}
}

"<![CDATA["			{FILACOLUMNA(); yylval.contenido = "<![CDATA["; BEGIN(cDATA); return T_CDATA_I;}
<cDATA>{
"]]>"				{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(INITIAL);return T_CDATA_F;}
{CONTENIDO_CDATA}		{FILACOLUMNA(); yylval.contenido = yytext; return CONT_DATA;}
.				{;error();}
}
   /*------------------------- DEFINICION XMLDec ------------------------------------*/
"<?xml"				{FILACOLUMNA(); yylval.contenido = "<?xml"; BEGIN(XMLDec); return T_XMLDEC;}
<XMLDec>{
"?>"				{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(INITIAL);return T_F_XMLDEC;}
{S}				{FILACOLUMNA(); yylval.contenido = yytext; return T_SPACE;} /* los espacios valen 01*/
{EQ}				{FILACOLUMNA(); yylval.contenido = yytext; return T_EQ; } /* los iguales valen 06 */

 (encoding)			{FILACOLUMNA(); yylval.contenido = "encoding"; return T_ENCOD;}
{ENCODNAME}			{FILACOLUMNA(); yylval.contenido = yytext; return T_ENDID;}
  
(version)			{FILACOLUMNA(); yylval.contenido = "version"; return T_VS;}
\"{VN}\"			{FILACOLUMNA(); yylval.contenido = yytext; return T_VNUMBER;}
'{VN}'				{FILACOLUMNA(); yylval.contenido = yytext; return T_VNUMBER;}
'\n'                             {FILACOLUMNA(); yycolumn =  1;}
.				{error();}

}
 /* ------------------------------DOCTYPE------------------------------ */
"<!DOCTYPE"			{FILACOLUMNA();  BEGIN(DocType); yylval.contenido = "<!DOCTYPE"; return T_DOCTYPE;}
<DocType>{
{S}				{FILACOLUMNA(); yylval.contenido = yytext; return T_SPACE;}
SYSTEM				{FILACOLUMNA(); yylval.contenido = yytext; BEGIN (SystLit);return T_SYSTEM;}
PUBLIC				{FILACOLUMNA(); yylval.contenido = yytext; BEGIN (PubIDLit);return T_PULIC;}
{NAME}				{FILACOLUMNA();  yylval.contenido = yytext; return T_NAME;}
">"				{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(INITIAL);return T_ENDDOCTYPE;}
'\n'                             {FILACOLUMNA(); yycolumn =  1;}
.				{FILACOLUMNA();error();}
}

<PubIDLit>{S}			{FILACOLUMNA();yylval.contenido = yytext; return T_SPACE;} 
<SystLit>{S}			{FILACOLUMNA();yylval.contenido = yytext; return T_SPACE;}
<PubIDLit>{PubIDLit}		{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(SystLit);return T_PUBIDLIT;}
<SystLit>{SYSTLIT}		{FILACOLUMNA(); yylval.contenido = yytext;  BEGIN(DocType);return T_SYSTLIT;}
<SystLit>\n                    {FILACOLUMNA();}
<PubIDLit>.			{;error();}   
<SystLit>.			{;error();} 

  /* ----------------------------DEFINICION ETags----------------------*/
"</"				{FILACOLUMNA(); yylval.contenido = "</"; BEGIN(ETags);return T_ETAG;}
<ETags>{
{TAG}				{FILACOLUMNA(); yylval.contenido = yytext; return T_TAG;}  /* return un tag*/
{S}				{FILACOLUMNA();yylval.contenido = yytext; return T_SPACE;}
{S}?">"				{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(INITIAL);return T_FTAG;}
.				{error();}
}
 
  
  
  /*-----------------------------DEFINICION ESTags-----------------------
   {SCRIPT}			{FILACOLUMNA(); printf(" t_scriptcont ");return T_SCRIPTCONT;}  */

"<"				{FILACOLUMNA(); yylval.contenido = "<"; BEGIN(ESTags);return T_ESTAG;} 
<ESTags>{
{S}				{FILACOLUMNA(); yylval.contenido = yytext; return T_SPACE;}
{EQ}				{FILACOLUMNA(); yylval.contenido = yytext; return T_EQ;}
{TAG}				{FILACOLUMNA(); yylval.contenido = yytext; return T_TAG;}
{ATRIBUTO}			{FILACOLUMNA(); yylval.contenido = yytext;  return T_ATRIBUTO;}

(\"http"://"www.w3.org"/"1999"/"xhtml\")	{FILACOLUMNA(); yylval.contenido = yytext; return T_URL;}
\"{SCHEME}("://"){HOST}(":"{PORT})?("/"{PATH})*({FILENAME})?\" {FILACOLUMNA(); yylval.contenido = yytext; return T_URL;}
\"("../"{PATH})?("/"{PATH})*{FILENAME}\" {FILACOLUMNA(); yylval.contenido = yytext; return T_URL;}
\'{SCHEME}("://"){HOST}(":"{PORT})?("/"{PATH})*({FILENAME})?\' {FILACOLUMNA(); yylval.contenido = yytext; return T_URL;}
\'("../"{PATH})?("/"{PATH})*{FILENAME}\' {FILACOLUMNA(); yylval.contenido = yytext; return T_URL;}
{NUM}				{FILACOLUMNA(); yylval.contenido = yytext; return T_NUM;} 

{CONTENIDO_ATRIBUTO}		{ FILACOLUMNA(); yylval.contenido = yytext;return T_CONTENT;}
{S}?"/>"			{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(INITIAL); return T_FIN_ETAG;}
{S}?">"				{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(INITIAL);  return T_FIN_STAG;}
.				{error();}
}

 /*-----------------------------DEFINICION Contenido-----------------------*/
 /*<CONTENIDO>"&"			{error();}
<CONTENIDO>"</"			{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(ETags);return T_ETAG;}
<CONTENIDO>"<"			{FILACOLUMNA(); yylval.contenido = yytext; BEGIN(ESTags);return T_ESTAG;}
<CONTENIDO>"]]>"/[^&<]		{error();}
<CONTENIDO>[^&<]*		{FILACOLUMNA(); yylval.contenido = yytext; return T_CONTENIDO;}*/
[^&" "'\n'<]*			{FILACOLUMNA();  yylval.contenido = yytext; return T_CONTENIDO;}
" "				{FILACOLUMNA(); yylval.contenido = yytext; return T_SPACE;}
[\n]          		        {FILACOLUMNA(); yycolumn =  1;} /* los enters valen 00 */
%%

void FILACOLUMNA()
{
  if(strcmp("\n",yytext)==0)
	  {
	    numFila++;		
	    numColumna=1;
	  }
  else {
	    numColumna+= yyleng;
  }
}

int error(void)
{
    printf("\n");
    printf("ERROR!! \n");
    printf("en el numero de fila:%d\nY en la columna:%d\n", numFila, numColumna);
    exit(1);
    
}