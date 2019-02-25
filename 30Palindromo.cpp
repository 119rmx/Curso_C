/*LEER UNA FRASE POR TECLADO Y DECIR SI ES PALINDROMO O NO, 
SIN TENER EN CUENTA LOS ESPACIOS EN BLANCO

DABALE ARROZ A LA ZORRA EL ABAD

Dabale Arroz A La Zorra El Abad*/

#include <stdio.h>

int main(){
    char frase[100];
    int cont, contDesc, contAsc;
    
    printf("Teclea una frase:\n");
    gets(frase);
    fflush(stdin);
    
    //Buscar el último caracter (la posición) de la frase
    /*for(cont=0;frase[cont]!='\0';cont++){
        contDesc=cont;
    }*/
    
    //OTRA FORMA
    for(cont=0;cont<99;cont++){
        if(frase[cont]=='\0'){
            contDesc=cont-1;
            break;
        }
    }

    contAsc=0;
    //ANTES DE empezar a comparar
    //saltar espacios por la izquierda 
    while(frase[contAsc]==' '){
        contAsc++;
    }
    //saltar espacios pr la derecha
    while(frase[contDesc]==' '){
        contDesc--;
    }
    //comparar uno a uno los caracteres desde los extremos 
    while(frase[contAsc]==frase[contDesc] && contAsc<contDesc){
          contAsc++;
          contDesc--; 
          
          while(frase[contAsc]==' '){
                contAsc++;
          }
          while(frase[contDesc]==' '){
              contDesc--;
          }                                
    }
    
    if(contAsc>=contDesc){
        printf("La frase SI es paindromo");
    } else {
           printf("La frase NO es paindromo");
      }
    
    printf("\n\nPulsa ENTER para continuar");
    getchar();
}
