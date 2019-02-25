/*PROGRAMA QUE LEA DOS NUMEROS POR TECLADO Y LOS MUESTRE POR
PANTALLA ORDENADOS DE MENOR A MAYOR*/
#include <stdio.h>

int main() {
    //
    int num1, num2;
    //LEER NUMEROS
    printf("Introduce el numero 1: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Introduce el numero 2: ");
    scanf("%d", &num2);
    fflush(stdin);
    
    if(num1>num2){
        printf("Ordenados: %d, %d", num2, num1);
    }
    else if(num1<num2){
             printf("Ordenados: %d, %d", num1, num2);
         }
         else{
             printf("Son iguales");
         }
         
    /*CON IF INDEPENDIENTES     
         
    if(num1>num2){
        printf("Ordenados: %d, %d", num2, num1);
    }    
    if(num1<num2){
        printf("Ordenados: %d, %d", num1, num2);
    }
    if(num1==num2){
        printf("Ordenados: %d, %d", num1, num2);
    }  
    
    */
    
    printf("Pulsa ENTER para continuar...");
    getchar();
}
