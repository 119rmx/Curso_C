/*PROGRAMA QUE LLENE UN ARRAY DE 20 NUMEROS CON NUMEROS 
ALEATORIOS ENTRE -99 Y 99.
MOSTRARLO POR PANTALLA.

MOSTRARLO EN ORDEN INVERSO (DESDE EL ULTIMO AL PRIMERO).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20

int main(){
    int numeros[20];
    int pos;
    
    srand(time(NULL));
    for(pos=0;pos<TAM;pos++){
        numeros[pos]=rand()%199-99;
    }
    printf("Contenido del array: \n");
    for(pos=0;pos<TAM;pos++){
        printf("%d ", numeros[pos]);
    }
    printf("\n\nAhora el array en orden inverso:\n");
    for(pos=TAM-1;pos>=0;pos--){
        printf("%d ", numeros[pos]);
    }
    //MOSTRAR EL CONTENIDO DEL ARRAY EN ORDEN INVERSO,
    //PERO CON UN BUCLE ASCENDENTE QUE VA DE 0 A 19
    for(pos=0;pos<TAM;pos++){
        printf("%d ", numeros[TAM-pos-1]);
    }
    
    
    printf("\n\nPulsa ENTER para finalizar...");
    getchar();
}
