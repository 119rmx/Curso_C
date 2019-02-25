/*PROGRAMA QUE LEA NUMEROS POR TECLADO HASTA QUE LEA EL -99. EL
-99 NO SE EVALUA.
ALFINAL MOSTRAR POR PANTALLA POR UN LADO:
        LA SUMA DE LOS MULTIPLOS DE 5
        LA SUMA DE LOS MULTIPLOS DE 3
EJEMPLO:
        Introduce un numero: 15
        Introduce un numero: 7
        Introduce un numero: 6
        Introduce un numero: 30
        Introduce un numero: 28
        Introduce un numero: 9
        Introduce un numero: 15
        Introduce un numero: 10
        Introduce un numero: -99
        La suma de los multiplos de 5 es: 70
        La suma de los multiplos de 3 es: 75
        */

#include <stdio.h>

int main(){
    int num, sumaMult3, sumaMult5;

    sumaMult3=0;
    sumaMult5=0;
    do {
        printf("Itroduce un numero (-99 para terminar): ");
        scanf("%d", &num);
        fflush(stdin);
        //EVALUAR EL NUMERO
        if(num%5==0){
            sumaMult5+=num;
        }
        if(num%3==0 && num!=-99){
           sumaMult3+=num;
        }
    } while(num!=-99);
    printf("Suma de los mult de 3: %d ",sumaMult3);
    printf("Suma de los mult de 5: %d ",sumaMult5);
    
    printf("Pulsa ENTER para continuar...");
    getchar();
}
