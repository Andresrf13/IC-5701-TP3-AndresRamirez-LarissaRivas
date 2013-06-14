#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *tokens[]={"a", "blockquote", "body", "button", "caption", "div", "form", "h1", "h2", "h3", "h4", "h5", "h6", "head", "hr", "html", "img", "input", "li", "link", "meta", "object", "ol", "option", "p", "align", "script", "style", "table", "td", "th", "tr", "textarea", "ul","b","br","code","dl","dt","dd","emt","footer","span","strong","title"};
  
char *atributo[46][17]={
  {"charset","coords","href","hreflang","name","rel","rev","shape","target", "NULL"},
  {"cite", "NULL"},
  {"alink","background","bgcolor","link","text","vlink", "NULL"},
  {"disabled","name","type","value", "NULL"},
  {"align", "NULL"},
  {"align", "NULL"},
  {"accept","accept-charset","action","enctype","method","name","target", "NULL"},
  {"align", "NULL"},
  {"align", "NULL"},
  {"align", "NULL"},
  {"align", "NULL"},
  {"align", "NULL"},
  {"align", "NULL"},
  {"profile", "NULL"},
  {"align","noshade","size","width", "NULL"},
  {"xmlns", "NULL"},
  {"align","alt","border","height","hspace","ismap","longdesc","scr","usemap","vspace","width", "NULL"},
  {"accept","align","alt","checked","disabled","maxlength","name","readonly","size","scr","type","value", "NULL"},
  {"type","value", "NULL"},
  {"charset","href","hreflang","media","rel","rev","target","type", "NULL"},
  {"content","http-equiv","name","scheme", "NULL"},
  {"align","archive","border","classid","codebase","codestype","data","declare","height","hspace","name","standby","type","usemap","vspace","width", "NULL"},
  {"compact","start","type", "NULL"},
  {"disable","label","selected","value", "NULL"},
  {"align", "NULL"},
  {"width", "NULL"},
  {"charset","defer","src","type","xml:space", "NULL"},
  {"media","type", "NULL"},
  {"align","bgcolor","border","cellpadding","cellspacing","frame","rules","summary","width", "NULL"},
  {"abbr","align","axis","bgcolor","char","charoff","colspan","headers","height","nowrap","rowspan","scope","valign","width", "NULL"},
  {"abbr","align","axis","bgcolor","char","charoff","colspan","headers","height","nowrap","rowspan","scope","valign","width", "NULL"},
  {"align","bgcolor","charoff","valign", "NULL"},
  {"cols","disabled","name","readonly","rows", "NULL"},
  {"compact","type", "NULL"},
  {"NULL"}, // son tags que solo tiene atributos globales, por lo que son NULL
  {"NULL"},
  {"NULL"},
  {"NULL"},
  {"NULL"},
  {"NULL"},
  {"NULL"},
  {"NULL"},
  {"NULL"},
  {"NULL"},
  {"NULL"},
  {"accesskey","class","dir","id","lang","style","tabindex","title", "NULL"}};
  
  
  
  


// recorre los tags en busca de atributos
void hayhijo (char *tag, nodo *NodoPadre){
    if (NodoPadre->hijo->hermano != NULL){
	imprimirtipo(tag, NodoPadre->hijo->hermano);
    }
}
// comprueba que los hermanos del hijo de tag sean atributos 
imprimirtipo(char *tag, nodo *NodoHijo){
    if (NodoHijo->hermano != NULL){
    char *atrib = "T_Atributo";
    int largo1 = strlen(atrib);
    int largo2 = strlen(NodoHijo->tipo);
     if (largo1 == largo2){ 
      pertenece(tag, NodoHijo->content);
     }
     else{ 
      }
    imprimirtipo(tag, NodoHijo->hermano);
    }
}

// revisa vector de los tags determina la posicion que se encuentra y revisa que el atributo determinado corresponda al tag buscando en la posicion de la matriz correspondiente a la posicion en el vector de los tags
void pertenece(char *tag, char *atribu){ 
  char *null = "NULL";
  int i;
  int cumple =0;  //    0 significa que no cumple
  for (i = 0; i < 45; i++){
    if (strcmp(tag,tokens[i])==0){
      int y=0;
      while (strcmp(null, atributo[i][y])!=0){
	if (strcmp(atribu, atributo[i][y])==0){
	  cumple++;
	  break;
	  } 
	y++;
	}
      if(cumple==0){
 	y=0;
 	while (strcmp(null, atributo[45][y])!=0){
  	  if (strcmp(atribu, atributo[45][y])==0){
  	    cumple++;
  	    break;
  	    }
 	  y++;
 	}
 	if(cumple==0){
 	  printf("ERROR: El atributo: ");
	  printf(atribu);
 	  printf(" no corresponde con el tag: ");
	  printf(tag);
	  printf("\n");
 	}
	}	
      }
    }
  }
