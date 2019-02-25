/*PROGRAMA QUE LEA UN NUMERO POR TECLADO (1-20) Y MUESTRE POR
PANTALLA:
         1
         1 2
         1 2 3 
         1 2 3 4 
         1 2 3 4 5 
         1 2 3 4 5 6

LO MISMO:
         6 5 4 3 2 1
         5 4 3 2 1
         4 3 2 1
         3 2 1
         2 1
         1
*/

#include <stdio.h>

int main(){
    int num, i, j;
    
    printf("Introduce un numero [1-20]: ");
    scanf("%d", &num);
    fflush(stdin);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    
    for(int fila=num;fila>=1;fila--){
        for(int cont=fila;cont>=1;cont--){
            printf("%d ", cont);                              
        }
        printf("\n");
    }                              
                                          
    
    printf("Pulsa ENTER para continuar...");
    getchar();
}
