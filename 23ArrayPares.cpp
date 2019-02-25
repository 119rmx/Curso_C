/*PROGRAMA QUE LLENE UN ARRAY DE 20 ELEMENTOS CON NUEMROS 
ALEATORIOS POSITIVOS MENORES QUE 50.
MOSTRARLO POR PANTALLA
PASAR LOS ELEMENTOS DE LAS POSICIONES PARES DE DICHO ARRAY
A OTRO ARRAY DE 10 ELEMENTOS QUE INICIALMENTE ESTÁ VACIO ¿¿??
MOSTRAR EL ARRAY DE 10.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main(){
    int numeros1[TAM];
    int numeros2[TAM/2];
    int pos1, pos2;
    
    srand(time(NULL));
    for(pos1=0;pos1<TAM;pos1++){
        numeros1[pos1]=rand()%51;
    }
    printf("Contenido del array: \n");
    for(pos1=0;pos1<TAM;pos1++){
        printf("%d ", numeros1[pos1]);
    }
    //PASAR LOS ELEMENTOS DE LAS POSICIONES PARES AL OTRO ARRAY
    for(pos1=1, pos2=0;pos2<TAM/2;pos2++, pos1+=2){
        numeros2[pos2]=numeros1[pos1];
    }
    
    //OTRA FORMA
    pos2=0;
    for(pos1=0;pos1<TAM;pos1++){
        if(pos1%2==1){
            numeros2[pos2]=numeros1[pos1];
            pos2++;
        }
    }

    printf("\n\nContenido del otro array: \n");
    for(pos1=0;pos1<TAM/2;pos1++){
        printf("%d ", numeros2[pos1]);
    }
        
    printf("\n\nPulsa ENTER para continuar...");
    getchar();

}
