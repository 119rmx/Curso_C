/*TENEMOS UN ARRAY BIDIMENSIONAL DE 10X6
LEER UN NUMERO POR TECLADO ENTRE 1 Y 10.
A CONTINUACIÓN LLENAR LAS FILAS PARES DEL ARRAY CON LOS MULTIPLOS
DE 2 EMPEZANDO POR EL NUMERO INTRODUCIDO (CADA FILA PAR SIGUE DE
LA ANTERIOR.
LLENAR LA FILAS IMPARES CON CON EL PRODUCTO DE LA COLUMNA EN LA
QUE ESTAMOS POR EL NÚMERO INTRODUCIDO.

UNA VEZ LLENO, MOSTRAR EL ARRAY.

*/

#include <stdio.h>
#define FILAS 10
#define COLS 6

int main(){
    //DECLARACION
    char numeros[FILAS][COLS];
    int fila, col, num, aux, fila1, fila2, i;
    
    do {
        printf("Introduce un numero: ");
        scanf("%d", &num);
        fflush(stdin);
    }while(num<0 || num>10);
    
    //CONVERTIR EL NUMERO INTRODUCIDO POR EL USUARIO EN EL 
    //NUMERO INICIAL PARA RELLENAR EL ARRAY (TIENE QUE SE PAR)
    if(num%2!=0){
       aux=num+1;
    }
    else{
         aux=num;
    }
    
    //LLENAR EL ARRAY
    for(fila=0;fila<FILAS;fila++){
        for(col=0;col<COLS;col++){
           if(fila%2==0){//filas impares para el usuario
              numeros[fila][col]=(col+1)*num;
           }
           else{//filas pares para el usuario
                numeros[fila][col]=aux;
                aux+=2;
           } 
        }
    }

    //MOSTRAR EL ARRAY
    printf("\n          1  2  3  4  5  6\n");
    for(fila=0;fila<FILAS;fila++){
        printf("Fila %2d: ", fila+1);
        for(col=0;col<COLS;col++){
            printf("%2d ",numeros[fila][col]);
        }
        printf("\n");
    }
    
    //LEER DOS NUMEROS DE FILAS POR TECLADO (ENTRE 1 y 10)
    do {
        printf("Introduce un numero: ");
        scanf("%d", &fila1);
        fflush(stdin);
    }while(fila1<1 || fila1>10);
    do {
        printf("Introduce un numero: ");
        scanf("%d", &fila2);
        fflush(stdin);
    }while(fila2<1 || fila2>10);
    fila1--;
    fila2--;
    //INTERCAMBIAR LOS CONTENIDOS DE AMBAS FILAS
    for(i=0;i<COLS;i++){
        aux=numeros[fila1][i];
        numeros[fila1][i]=numeros[fila2][i];
        numeros[fila2][i]=aux;
    }
    
    //MOSTRAR DE NUEVO EL ARRAY
    printf("\n          1  2  3  4  5  6\n");
    for(fila=0;fila<FILAS;fila++){
        printf("Fila %2d: ", fila+1);
        for(col=0;col<COLS;col++){
            printf("%2d ",numeros[fila][col]);
        }
        printf("\n");
    }




    printf("\n\n\nPulsa ENTER...");
    getchar();
    
}
