/*CREAR UN ARRAY DE 10 ELEMENTOS.
1º LLENARLO CON NUMEROS POSITIVOS ALEATORIOS < 100.
una vez lleno, MOSTRAR LOS NUMEROS POR PANTALLA SEPARADOS POR UN ESPACIO.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int pos;
    int numeros[10];
    
    srand(time(NULL));
    //llenar el array
    printf("Estoy llenando el Array...");
    for(pos=0;pos<10;pos++){
        numeros[pos]=rand()%100;
    }
    //EL ARRAY YA ESTA LLENO
       
    //mostrarlo por pantalla
    printf("\n\nEste es el contenido del array...\n");
    for(pos=0;pos<10;pos++){
        printf("%d ", numeros[pos]);
    }
    
    printf("\n\nPulsa ENTER para continuar..:");
    getchar();
}
