/*DOBLE BUCLE
for(int i=0;i<10;i++){

        for(int j=0;j<10;j++){
            printf("Hola";
        }
        printf("\n");
}

ROGRAMA QUE LEA POR TECLADO UN NUMERO POSITIVO < 20 Y MUESTRE 
POR PANTALLA:
0 1 2 3 4 ... N-1
0 1 2 3 4 ... N-1
.......
.......
0 1 2 3 4 ... N-1*/

#include <stdio.h>

int main(){
    int num, i, j;
    
    do{
        printf("Introduce un numero [1-20]: ");
        scanf("%d", &num);
        fflush(stdin);
    }while(num<0 || num>20);
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    
    printf("Pulsa ENTER para continuar...");
    getchar();
}
