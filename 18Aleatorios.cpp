/*PROGRAMA QUE GENERE 10 NUMEROS ALEATORIOS ENTRE 1 Y 100.
EL PROGRAMA LOS IRÁ MOSTRANDO POR PANTALLA Y AL FINAL
MOSTRARÁ LA SUMA DE LOS PARES Y LA SUMA DE LOS MENORES DE 50.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int cont, num, sumaPares, suma50;

    srand(time(NULL));
    sumaPares=0;
    suma50=0;
    for(cont=1;cont<=10;cont++){
        num=rand()%100+1;
        printf("%d ", num);
        if(num%2==0){
            sumaPares+=num;
        }
        if(num<50){
            suma50+=num;
        }
    }
    printf("\n\nLa suma de los pares es: %d", sumaPares);
    printf("\n\nLa suma de los menores de 50 es: %d\n", suma50);
    printf("\n\nPulsa ENTER para continuar..:");
    getchar();
}
