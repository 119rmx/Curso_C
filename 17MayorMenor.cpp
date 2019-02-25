/*LEER NUMEROS POR TECLADO HASTA QUE SE TECLEE EL 0.
AL FINAL MOSTRAR EL MAYOR Y EL MENOR DE TODOS LOS INTRODUCIDOS.
EL CERO NO CUENTA.*/

#include <stdio.h>

int main(){
    int num, max, min;
    
    printf("Introduce un numero (0 para terminar): ");
    scanf("%d", &num);
    fflush(stdin);
    if(num==0){
        printf("No hay max ni min");
    }else{ //EL PRIMER NUMERO NO ES 0   
        max=num;
        min=num;
        do {
            printf("Introduce un numero (0 para terminar): ");
            scanf("%d", &num);
            fflush(stdin);
            if(num>max && num!=0){
                max=num;
            }
            if(num<min && num!=0){
               min=num;
            }
        }while(num!=0);
        printf("\n\nEl mayor es: %d", max);
        printf("\n\nEl menor es: %d", min);
    }
    
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}
