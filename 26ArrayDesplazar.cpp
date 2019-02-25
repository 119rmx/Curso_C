/*LLENAR UN ARRAY DE 20 ELEMENTOS CON NUMEROS ALEATORIOS DE
1 A 100. 
MOSTRARLO POR PANTALLA.
A CONTINUACIÓN DESPLAZA TODOS LOS ELEMENTOS DENTRO DEL ARRAY
UNA POSICIÓN A LA DERECHA (EL ÚLTIMO PASA A LA POS 0.
MOSTRARLOS DE NUEVO.
EJEMPLO:
    ARRAY ORIGINAL:
    24 6 45 85 94 2 12 15 23 26 65 54 75 48 21 32 98 5 24 32
    
    ARRAY CON ELEMENTOS DESPLAZADOS:
    32 24 6 45 85 94 2 12 15 23 26 65 54 75 48 21 32 98 5 24
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main(){
    int numeros[TAM];
    int pos, aux;
    
    srand(time(NULL));
    //LLENAR EL ARRAY
    for(pos=0;pos<TAM;pos++){
        numeros[pos]=rand()%100+1;
    }
    //MOSTRARLO POR PANTALLA
    printf("\nContenido del array: \n");
    for(pos=0;pos<TAM;pos++){
        printf("%d ", numeros[pos]);
    }
    
    //DESPLAZAR EL CONTENIDO DEL ARRAY UNA POS A LA DERECHA
    aux=numeros[TAM-1];
    for(pos=TAM-1;pos>=1;pos--){
        numeros[pos]=numeros[pos-1];
    }
    numeros[0]=aux;
    
    //VOLVER A MOSTRARLO CON LOS ELEMENTOS DESPLAZADOS
    printf("\n\nContenido del array desplazado: \n");
    for(pos=0;pos<TAM;pos++){
        printf("%d ", numeros[pos]);
    }
    printf("\n\nPulsa ENTER para continuar...");
    getchar();

}
