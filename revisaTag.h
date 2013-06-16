#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 /*analizador semantico 
  *Funciones para verificar que los tag, atributos y los contenidos utilizados en el codigo cumplan con las reglas establecidas*/



// matriz de los tipos de atributos existentes
char *tipo_atributo[3][59]={
{"height","width","height","max","maxlength","min","multiple","size","start" "step","value","sizes","border","colspan","rowspan","cols","maxlength","rows","id"},
{"href","cite","formation","manifest","action", "xmlns","scr","formaction","data","style","tabindex"},
{"hreflang","media","name","rel", "lang","spellcheck", "style", "target","autofocus","form","formenctype","formmethod","formnovalidate", "formtarget", "name","value","type","accept-charset","autocomplete","enctype","method","accept","novalidate","target","crossorigin","alt","autocomplete","checked","disabled","disable", "formenctype","formmethod","formnovalidate","formtarget","list","pattern", "placeholder","readonly","required","content","http-equiv","usemap","label","selected","charset","headers","scope","wraps","accesskey","class","contenteditable","contextmenu","dir","draggable","dropzone","id","title","translate"}};

// comprueba que el contenido de los atributos sean validos. 
void revisa_contenido(int tipo, nodo *Nodo, int col, int fila ){
  int esta = 0;
  int f;  
  char *contenido = Nodo->content;  
  if(tipo == 0)
  {
    for(f=0; f<18; f++)
    { 
      if (strcmp(contenido, tipo_atributo[0][f]) == 0)  // revisa que el contenido se encuentre en la primera fila de la matriz de los tipos de atributos siendo el tipo que ingresa igual a 0
      {
	esta = 1;
	break;
      }
    } 
  }
  else if(tipo ==1)
  {
    for(f=0; f<10; f++)
    {
     if (strcmp(Nodo->content,tipo_atributo[1][f])==0) // revisa que el contenido se encuentre en la segunda fila de la matriz, siendo el tipo que ingresa igual a 1
      {
	esta = 1;
	break;
      }
    } 
  }
  else if(tipo ==2)
  {
    for(f=0; f<58; f++)
    {
      if (strcmp(Nodo->content,tipo_atributo[2][f])==0)// revisa que el contenido se encuentre en la tercera fila de la matriz, siendo el tipo que ingresa igual a 2
      {
	esta = 1;
	break;
      }
    }
  } 
  if(esta == 0)  // en caso de que no cumpla con ninguno de los requisitos del arreglo, imprime error en la fila y en la columna determinada
  {
    printf("El contenido del atributo %s en la posicion fila=%i columna=%i no posee un contenido correcto \n", Nodo->content, fila, col);
  }
}


//  Arreglo de tags posibles de utilizar
char *tokens[]={"a","b","blockquote","body","br","button","caption","code","div","dl","dt","dd","emt","form","h1","h2","h3","h4","h5","h6","head","hr","html","img","input","li","link","meta","object","ol","option","p","pre","script","span","strong","style","table","td","th","tr","textarea","title","ul"};

//  Matriz de los atributos correspondientes a cada tag, la posicion de los atributos en la matriz corresponden a la posicion del tag en el arreglo tokens.
//  la lista de los arreglos validos para XHTML5 unicamente
// al final se encuentra una linea de mas que corresponde a la lista de los atributos globales

char *atributo[45][30]={
{"href","hreflang","media","rel","target","type","NULL"},
{"NULL"},
{"cite","NULL"},
{"NULL"},{"NULL"},
{"autofocus","disabled","form","fomaction","formenctype","formmethod","formnovalidate","formtarget","name","type","value","NULL"},
{"NULL"},{"NULL"},{"NULL"},{"NULL"},{"NULL"},{"NULL"},{"NULL"},
{"accept-charset","action","autocomplete","enctype","method","name","novalidate","target","NULL"},
{"NULL"},{"NULL"},{"NULL"},{"NULL"},{"NULL"},{"NULL"},{"NULL"},{"NULL"},
{"manifest","xmlns","NULL"},
{"alt","crossorigin","height","ismap","scr","usemap","width","NULL"},
{"accept","alt","autocomplete","autofocus","checked","disabled","form","formaction","formenctype","formmethod","formnovalidate","formtarget","height","list","max","maxlength","min","multiple","name","pattern","placeholder","readonly","required","size","scr","step","type","value","width","NULL"},
{"value","NULL"},
{"href","hreflang","media","rel","sizes","type","NULL"},
{"charset","content","http-equiv","name","NULL"},
{"data","form","height","name","type","usemap","width","NULL"},
{"reversed","start","type","NULL"},
{"disable","label","selected","value","NULL"},
{"NULL"},{"NULL"},
{"async","charset","defer","src","type","NULL"},
{"NULL"},{"NULL"},
{"media","scoped","type","NULL"},
{"border","NULL"},
{"colspan","headers","NULL"},
{"colspan","headers","rowspan","scope","NULL"},
{"NULL"},
{"autofocus","cols","disabled","form","maxlength","name","placeholder","readonly","required","rows","wraps","NULL"},
{"NULL"},{"NULL"},
{"accesskey","class","contenteditable","contextmenu","dir","draggable","dropzone","hidden","id","lang","spellcheck","style","tabindex","title","tanslate","NULL"}
};  
 

//  lista de los atributos que NO se pueden utilizar en HTML5 especificamente
char *xhtml5[45][13]={
{"charset","coords","name","rev","shape","NULL"},
{"NULL"},{"NULL"},
{"alink","background","bgcolor","link","text","vlink","NULL"},
{"NULL"},{"NULL"},
{"align","NULL"},
{"NULL"},{"align","NULL"},
{"NULL"},{"NULL"},{"NULL"},{"NULL"},
{"accept","NULL"},
{"align","NULL"},
{"align","NULL"},
{"align","NULL"},
{"align","NULL"},
{"align","NULL"},
{"align","NULL"},
{"profile","NULL"},
{"align","noshade","size","width","NULL"},
{"NULL"},
{"align","border","hspace","longdesc","vspace","NULL"},
{"align","NULL"},
{"type","NULL"},
{"charset","rev","target","NULL"},
{"scheme","NULL"},
{"align","archive","border","classid","codebase","codestype","declare","hspace","standby","vspace","NULL"},
{"compact","NULL"},
{"NULL"},
{"align","NULL"},
{"width","NULL"},
{"xml:space","NULL"},
{"NULL"},{"NULL"},{"NULL"},
{"align","bgcolor","cellpadding","cellspacing","frame","rules","summary","width","NULL"},
{"abbr","align","axis","bgcolor","char","charoff","height","nowrap","rowspan","scope","valign","width","NULL"},
{"abbr","align","axis","bgcolor","char","charoff","height","nowrap","valign","width","NULL"},
{"char","align","bgcolor","charoff","valign","NULL"},
{"NULL"},{"NULL"},
{"compact","type","NULL"},
};
// revisa vector de los tags determina la posicion que se encuentra y revisa que el atributo determinado corresponda al tag buscando en la posicion de la matriz correspondiente a la posicion en el vector de los tags
void pertenece(char *tag, char *atribu, int col, int fila ){ 
  char *null = "NULL";
  int i;
  int cumple =0;  //    0 significa que no cumple
  for (i = 0; i < 44; i++){  // recorre la lista de los tags para determinar en que posicion del arreglo se encuentra y asi revisar que el o los  atributos con los que cuentan sea aceptado.
    if (strcmp(tag,tokens[i])==0){
      int y=0;
      while (strcmp(null, atributo[i][y])!=0){   //  recorre la matriz de los atributos en la posicion dada por el tag en el int i anterior y verifica que se encuentre y sea valido.
	if (strcmp(atribu, atributo[i][y])==0){
	  cumple++;
	  break;
	  } 
	y++;
	}
      if(cumple==0){  //  si el atributo no se encuentra en la lista de atributos del tag, se revisa que se encuentre en los atributos globales
 	y=0;
 	while (strcmp(null, atributo[44][y])!=0){
  	  if (strcmp(atribu, atributo[44][y])==0){
  	    cumple++;  // si se encuentra en los atributos globales, sustitye el valor del int cumple para que seguidamente no ingrese a ningun error
  	    break;
  	    }
 	  y++;
 	}
 	if(cumple==0){  // si el atributo no es valido, pero se encuentra en la lista de los atributos que NO se pueden utilizar en XHTML5 imprime este error
	  y=0;
	  while (strcmp(null, xhtml5[i][y])!=0){
	    if (strcmp(atribu, xhtml5[i][y])==0){
	      cumple++;
	      printf("ERROR EN HTML5 NO SE PUEDE USAR: El atributo: %s no corresponde con el tag: %s en la posicion fila=%i columna=%i\n", atribu, tag, fila, col);
	      break;
	    }
	    y++;
	  }
	  if(cumple==0){  //  en caso de tampoco ser un atributo valido, pero que no es prohibido utilizarlo en XHTML5 imprime este correspondiente error
	    printf("ERROR: El atributo: %s no corresponde con el tag: %s en la posicion fila=%i columna=%i \n", atribu, tag, fila, col);
	  }
	  }
	}	
      }
    }
  }
  
  


// recibe el nodo padre de la seccion de los tags y los atributos... y envia a la revision de los atrubitos el nodo en el cual inicia el tag.
void hayhijo (char *tag, nodo *NodoPadre, int col, int fila){ 
    if (NodoPadre->hijo->hermano != NULL){
	imprimirtipo(tag, NodoPadre->hijo->hermano, col, fila);
    }
}
// recorre todos los hermanos del tag para determinar si todos los atributos que se encuentren correspondan al tag ingresado.
imprimirtipo(char *tag, nodo *NodoHijo, int col, int fila){
    if (NodoHijo->hermano != NULL){
    char *atrib = "T_Atributo";
    int largo1 = strlen(atrib);
    int largo2 = strlen(NodoHijo->tipo);
     if (largo1 == largo2){ 
      pertenece(tag, NodoHijo->content, col, fila);  // recorre todos los hermanos, pero envia a la funcion pertenece unicamente a los nodos en los que el contenido del mismo sea igual a T_Atributo, para comprobar su validez.
     }
     else{ 
      }
    imprimirtipo(tag, NodoHijo->hermano, col, fila);
    }
}
