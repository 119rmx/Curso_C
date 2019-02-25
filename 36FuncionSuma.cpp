


/*PROGRAMA QUE LEA TRES NUMEROS POR TECLADO Y MEDIANTE LLAMADAS
A LA FUNCIÓN sumar OBTENGA EL RESULTADO DE LAS SUMAS Y LAS 
MUESTRE POR PANTALLA.

FUNCIÓN sumar: RECIBE TRES NUMEROS COMO PARÁMETROS Y DEVUELVE
SU SUMA*/

#include <stdio.h>

//FUNCION sumar
int sumar(int num1, int num2, int num3){
    int resultado;
    resultado=num1+num2+num3;
    num1=0;
    return resultado;
}

int main(){
    int num1, num2, num3, resultado;
    printf("Intropduce el primer numero: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Intropduce el segundo numero: ");
    scanf("%d", &num2);
    fflush(stdin);
    printf("Intropduce el tercer numero: ");
    scanf("%d", &num3);
    fflush(stdin);
    resultado=sumar(num1, num2, num3);
    
    printf("La suma es: %d", resultado);
    
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}


