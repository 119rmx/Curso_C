/*ARRAY BIDIMENSIONAL PARA CREAR UN TABLERO DE AJEDREZ.
LLENARLO CON LA SITUACION INICIAL.
MOSTRARLO POR PANTALLA.


*/

#include <stdio.h>
#define FILAS 8
#define COLS 8

int main(){
    //DECLARACION
    char tablero[FILAS][COLS];
    int fila, col;
    //VACIAR EL TABLERO
    for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
            tablero[fila][col]='.';
        }
    }
    //RELLENAR EL TABLERO???
    //llenar 32 casillas: algunas son comunes
    //BLANCAS
    tablero[0][0]='T';
    tablero[0][1]='C';
    tablero[0][2]='A';
    tablero[0][3]='K';
    tablero[0][4]='Q';
    tablero[0][5]='A';
    tablero[0][6]='C';
    tablero[0][7]='T';
    //NEGRAS
    for(col=0;col<8;col++){
        tablero[7][col]=tablero[0][col];
    }
   /* tablero[7][0]='T';
    tablero[7][1]='C';
    tablero[7][2]='A';
    tablero[7][3]='R';
    tablero[7][4]='X';
    tablero[7][5]='A';
    tablero[7][6]='C';
    tablero[7][7]='T';*/
    //PEONES (BLANCOS Y NEGRAS)
    for(fila=1;fila<=6;fila+=5){
        for(col=0;col<COLS;col++){
            tablero[fila][col]='P';
        }
    }
    
    //OTRA FORMA
    for(col=0;col<COLS;col++){
        tablero[1][col]='P';
        tablero[6][col]='P';
    }
    
    

    //MOSTRAR EL TABLERO
    printf("BLANCAS\n");
    for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
            printf("%c ",tablero[fila][col]);
        }
        printf("\n");
    }
    printf("NEGRAS\n");
    

    printf("\n\n\nPulsa ENTER...");
    getchar();
    
}



