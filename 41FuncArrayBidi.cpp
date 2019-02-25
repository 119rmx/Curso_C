/*programa:
           Tenemos un array de 6 x 8, otro de 6 y otro de 8. 
           Mediante llamadas  las funciones:
           llenarlo
           mostrarlo
           realizar la suma por filas
           realizar la suma por columnas
           

FUNCIONES:
    llenar: llena el array con numeros aleatorios < 100
    mostrar: muestra el array por filas
    sumarFilas: recibe como parámetros el array de 6x8 y un array
                de 6 para dejar el resultado. Realiza la suma 
                por filas y deja el resultado en el array de 6
    sumarCols: recibe como parámetros el array de 6x8 y un array
                de 8 para dejar el resultado. Realiza la suma 
                por columnas y deja el resultado en el array de 8
    
    filaMayor: Función que recibe el array de 6x8 y devuelve el
               número de fila cuya suma de los elementos es la 
               mayor de todas.
    mostrarFila: Función que recibe el array de 6x8 y un número de
                 fila y muestra por pantalla el contenido de esa
                 fila.
                 
                 
                 
    filaOrdenada: Función que recibe un array bidimensinal de
                  6x8 y un numero de fila (entre 0 y 5) y 
                  devuelve true si la fila está ordenada de 
                  forma ascendente y false en caso contrario.
                  
                  
                  
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 6
#define COLS 8

void llenar(int numeros[FILAS][COLS]){
     int fila, col;
     for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
              numeros[fila][col]=rand()%99+1;
        }
    }
}

void mostrar(int numeros[FILAS][COLS]){
     int fila, col;
     for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
              printf("%2d ", numeros[fila][col]);
        }
        printf("\n");
    }
}

void mostrar2(int numeros[FILAS][COLS], int sumaF[FILAS], int sumaC[COLS]){
     int fila, col;
     for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
              printf("%3d ", numeros[fila][col]);
        }
        printf("%8d", sumaF[fila]);
        printf("\n");
    }
    printf("\n");
    for(col=0;col<COLS;col++){
        printf("%3d ", sumaC[col]);
    }
}



void sumarFilas(int numeros[FILAS][COLS], int sumaF[FILAS]){
  //PARA CADA FILA:
      //SUMAR LOS 8 ELEMENTOS DE UNA FILA
      //DEJAR EL RESULTADO DE LA SUMA EN EL ARRAY sumaF
     int fila, col, suma;
     for(fila=0;fila<FILAS;fila++){
         suma=0;
         for(col=0;col<COLS;col++){
             suma+=numeros[fila][col];
         }
         sumaF[fila]=suma;
     }
}

void sumarCols(int numeros[FILAS][COLS], int sumaC[COLS]){
     int fila, col, suma;
     for(col=0;col<COLS;col++){
         suma=0;
         for(fila=0;fila<FILAS;fila++){
             suma+=numeros[fila][col];
         }
         sumaC[col]=suma;
     }
}

int filaMayor(int numeros[FILAS][COLS]){
     int fila, col, suma, mayor, pos;
     mayor=0;
     pos=0;
     for(fila=0;fila<FILAS;fila++){
        suma=0;
        for(col=0;col<COLS;col++){
            suma+=numeros[fila][col];
        }
        //hemos terminado con una fila
        if(suma>mayor){
            mayor=suma;
            pos=fila;
        }
     }
     return pos;
}
     
void mostrarFila(int numeros[FILAS][COLS], int numFila){
    int pos;
    
    for(pos=0;pos<COLS;pos++){
        printf("%d ", numeros[numFila][pos]);
    } 
   /* int fila, col;
    for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
            if(fila==numFila){
                printf("%d ", numeros[fila][col]);
            }
        }
    }*/
}

int main(){
    int numeros[FILAS][COLS], sumaF[FILAS], sumaC[COLS];
    int cont, mayor;
    srand(time(NULL));
    
    llenar(numeros);
    mostrar(numeros);

    sumarFilas(numeros, sumaF);
    sumarCols(numeros, sumaC);
    
    getchar();
    printf("\n\n");
    mostrar2(numeros, sumaF, sumaC);
    
    mayor=filaMayor(numeros);
    printf("\n\nContenido de la fila mayor:\n");
    mostrarFila(numeros, mayor); 

    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}




