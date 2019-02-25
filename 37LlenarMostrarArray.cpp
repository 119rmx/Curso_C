/*PROGRAMA QUE TENGA UN ARRAY DE 10 X 5 Y MEDIANTE LLAMADAS A 
FUNCIONES, LLENE EL ARRAY CON NUEMROS ALEATORIOS POSITIVOS
MENORES QUE 100, LO MUESTRE POR PANTALLA.

FUNCIONES:
          llenarArray: LLENA EL ARRAY DE 10X5 RECIBIDO COMO 
                       PARÁMETRO CON NUMEROS ENTRE 1 Y 99
          mostrarArray:MUESTRA POR PANTALLA EL ARRAY DE 10X5
                       RECIBIDO COM PARÁMETRO
          
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenarArray(int numeros[10][5]){
     int fila, col;
     
     for(fila=0;fila<10;fila++){
         for(col=0;col<5;col++){
             numeros[fila][col]=rand()%99+1;
         }
     }
}

void mostrarArray(int numeros[10][5]){
     int fila, col;

     for(fila=0;fila<10;fila++){
         for(col=0;col<5;col++){
             printf("%2d ", numeros[fila][col]);
         }
         printf("\n");
     }
}


int main(){
    //
    //declarar los arrays
    int numeros1[10][5];
    int numeros2[10][5];
    int numeros3[10][5];
    int numeros4[10][5];
    int numeros5[10][5];
    
    srand(time(NULL));
    
    printf("Array1\n");
    llenarArray(numeros1);
    mostrarArray(numeros1);
    printf("\nArray2\n");    
    llenarArray(numeros2);
    mostrarArray(numeros2);
    printf("\nArray3\n");    
    llenarArray(numeros3);
    mostrarArray(numeros3);
    printf("\nArray4\n");    
    llenarArray(numeros4);
    mostrarArray(numeros4);
    printf("\nArray5\n");    
    llenarArray(numeros5);
    mostrarArray(numeros5);
    
    
    printf("\n\nPulsa ENTER para finalizar...");
    getchar();
}





