/*PROGRAMA QUE LEA POR TECLADO 8 NUMEROS. AL FINAL DEBERÁ
MOSTRAR UN MENSAJE INDICANDO CUANTOS ERAN POSITIVOS, CUANTOS
NEGATIVOS Y CUÁNTOS CEROS.*/

#include <stdio.h>

int main(){
    //VARIABLES
    int num, cont;
    int contPos, contNeg, contCeros;
    
    contPos=0;
    contNeg=0;
    contCeros=0;
    //CUERPO DEL PROGRAMA
    /*hacer 8 veces
          leer un numero
          evaluar el numero para contarlo como pos, neg o cero
    fin bucle*/
    for(cont=1;cont<=8;cont++){
        printf("Introduce un numero: ");
        scanf("%d", &num);
        fflush(stdin);
        if(num<0){
            contNeg++;
        }
        else if(num>0){
                 contPos++;
             }
             else {
                      contCeros++;
             }
    }

    printf("\nPositivos: %d, \nNegativos: %d, \nCeros: %d", 
            contPos, contNeg, contCeros);
       
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}

