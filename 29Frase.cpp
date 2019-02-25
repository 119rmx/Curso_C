/*Arrays de caracteres:
         Declaración: 
             char frase[100];
             
         leen:
              scanf("%s", frase);->solo lee la 1ª palabra
              gets(frase);
         Termina 

LEER UNA FRASE POR TECLADO Y MOSTRAR POR PANTALLA LAS 10
PRIMERAS LETRAS*/







#include <stdio.h>

int main(){
    char frase[100], cont;
    
    //leer la frase
    printf("Introduce una frase: ");
    gets(frase);
    fflush(stdin);
 
    for(cont=0;cont<10;cont++){
        printf("%c", frase[cont]);
    }
    
    printf("\n\nPulsa ENTER para finalizar...");
    getchar();
}
