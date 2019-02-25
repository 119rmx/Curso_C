/*ORDENAR UN ARRAY:
MÉTODO DE LA BURBUJA:
       DOBLE BUCLE.
       EN CADA PASADA DEL BUCLE INTERNO ASEGURAMOS QUE SE HA 
       ORDENADO UN NUMERO MÁS QUE EN EL BUCLE ANTERIOR.
       
       PARA IR SUBIENDO EL MAYOR A LA ÚLTIMA POSICIÓN, SE VA
       COMPARANDO CADA ELEMENTO CON EL DE LA POSICIÓN SIGUIENTE,
       DEJANDO EL MAYOR DE LOS DOS EN LA POS "SIGUIENTE"
       
       for(i=0;i<15;i++){
           for(j=0;j<15;j++){
               if(n[i]>n[i+1]){
                               
           }
       }
       i 0 0 0 0 0 0 0 0 0 0  0  0  0  0  0
       j 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14







LLENAR UNA RRAY DE 15 NUMEROS ALEATORIOS ENTRE 1 Y 50 Y MOSTRARLO
POR PANTALLA.
ORDENARLO POR EL MÉTODO DE LA BURBUJA
VOLVER A MOSTRARLO YA ORDENADO.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeros[15];
    int i, j, aux;
    srand(time(NULL));
    
    //LLENAR EL ARRAY
    for(i=0;i<15;i++){
        numeros[i]=rand()%50+1;
    }
    
    //MOSTRAR EL ARRAY
    for(i=0;i<15;i++){
        printf("%d ", numeros[i]);
    }
    
    //ORDENAR EL ARRAY POR EL METODO DE LA BUTBUJA
    for(i=0;i<14;i++){
        for(j=0;j<14;j++){
            if(numeros[j]>numeros[j+1]){
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
        }
    }
    
    //MOSTRAR EL ARRAY YA ORDENADO
    printf("\n\n");
    for(i=0;i<15;i++){
        printf("%d ", numeros[i]);
    }
    printf("\n\nPulsa ENTER para continuar");
    getchar();
}
