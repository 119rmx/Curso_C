/*ARRAYS BIDIMENSIONALES (MATRICES):
         
     Declaración:
         tipo nombre[num filas][num columnas];
         
     Instrucciones (acceso al array):
         nombre[num fila][num colum]=valor;
         
     Ejemplo:
         int numeros[3][6];
         
         numeros[3][4]=345;

    POR FILAS:
    15 60 54 85 78 65
    20 90 65 32 86 45
    21 84 56 95 68 78
    POR COLUMAS:
    15 20 21
    60 90 84
    54 65 56
    85 32 95
    78 86 68
    65 45 78
    
 
LLENAR UN ARRAY DE 10 FILAS Y 6 COLUMNAS CON NUMEROS ALEATORIOS
ENTRE 100 Y 200.

1)MOSTRARLO POR FILAS
2)MOSTRARLO POR COLUMNAS
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 10
#define COLS 6

int main(){
    int numeros[FILAS][COLS];
    int fila, col;
    srand(time(NULL));
    
    //LLENAR EL ARRAY
    for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
            numeros[fila][col]=rand()%101+100;
        }
    }
    //MOSTRAR EL ARRAY POR FILAS
    printf("Contenido del array por Filas:\n");
    for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
            printf("%d ",numeros[fila][col]);
        }
        printf("\n");
    }
    
    //MOSTRAR EL ARRAY POR COLUMNAS
    printf("\n\nContenido del array por Columnas:\n");
    for(col=0;col<COLS;col++){
        for(fila=0;fila<FILAS;fila++){
            printf("%d ",numeros[fila][col]);
        }
        printf("\n");
    }
    printf("\n\nPulsa ENTER para continuar");
    getchar();
}
