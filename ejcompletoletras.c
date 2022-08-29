#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/*
int main() {
  int c,a=0,cont=0;
  printf("Ingrese la frase: ");
  c=getchar();
  while(c!='.')
  {
    c=getchar();
    if(c!=' '){
    cont++;
    }
  
    if(c==' '){
      if(cont>3){
        a++;
        cont=0;
      }else{
      
        cont=0;
      }
    
    }
    
  
    
  }printf("La cantidad de palabras de mas de 3 letras es: %d",a);
}
*/



/*
int main(){
  int c,cont=0,acum=0;
  printf("Flaco ingresame una frase: ");
  c=getchar();
  while(c!='.'){
    c=getchar();
    cont++;
    if
  }
*/

/*
int main(){
  int c, cont=0 , a=0;
  c=getchar();
  while (c!='.'){
    while(c!=' ' && c!='.'){
      c=getchar();
      cont++;
      
    }
    if(cont>3){
      a++;
    }
    cont=0;
    c=getchar();
  }
  printf("La cantidad de palabras de mas de 3 letras es: %d",a);
}
*/


/*
int main()
{
  int c,a,cont=0, primera;
  printf("ingresa una frase: ");
  c=getchar(); 
  primera=c;
  while(c!='.'){
    while(c!=' ' && c!='.'){
      //putchar(c);
      
      cont++;
      if(cont==2){
        putchar(primera);
        putchar(c);
      
      }else if(cont>2){
        putchar(c);
      }
      c=getchar();
    }
    cont=0;
    while(c==' ' && c!='.'){
      c=getchar();
      if(c!=' '){
        primera=c;
        putchar(' ');
        }
    
    }

    }
  return 0;
}
*/

/*
int main()
{
    int c,aux,aux1;
  printf("Ingrese una frase: ");
  c=getchar();
  while(c!='.')
  {
    while(c!='.'&&c!=' ')
    {
      if(c=='v')
      {
        aux=getchar();
        if(aux=='l'){
          putchar('b'); 
          putchar(aux);//l
        }else{
          putchar(c); //v
          putchar(aux);
        }
      }else{
        putchar(c); 
      }

       c = getchar();
    }
    while(c==' '&&c!='.')
    {
      putchar(c);
      c=getchar();
    }
  }
}
*/

int main(){
  int c,primera,aux,cont=0;
  printf("Ingresa una frase: ");
  c=getchar();
  primera = c;
  while(c!='.'){
    while(c!='.'&&c!=' '){
      aux=c;
      c=getchar();
      
    }
    
    if(aux==primera){
        cont++;
      }  
    c=getchar();
    
  }
  
printf("La frase tiene oraciones con %d ini/fin iguales",cont);
}