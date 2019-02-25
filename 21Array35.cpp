/*LLENAR UN ARRAY DE 35 ELEMENTOS CON NUMEROS ALEATORIOS 
POSITIVOS DE DOS DIGITOS.
UNA VEZ LLENO, MOSTRARLO POR PANTALLA, CON 10 NÚMEROS POR FILA.
A CONTINUACIÓN SUMAR LOS NUMEROS IMPARES QUE SEAN MAYORES QUE 20
Y MOSTRAR SU SUMA POR PANTALLA.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 35
/*#define NOMBRE valor;
#define PI 3.141592;*/


int main(){
    int pos, suma, aux, posMayor, mayor;
    int numeros[TAM];
    
    srand(time(NULL));
    //llenar el array
    printf("Estoy llenando el Array...");
    for(pos=0;pos<TAM;pos++){
        numeros[pos]=rand()%90+10;
    }
    //MOSTRAR EL ARRAY (10 POR LINEA)
    printf("\n\n");
    for(pos=0;pos<TAM;pos++){
        printf("%d ", numeros[pos]);
        if((pos+1)%10==0){
            printf("\n");
        }
    }
    
    suma=0;
    for(pos=0;pos<TAM;pos++){
        if(numeros[pos]%2==0 && numeros[pos]>20){
            suma+=numeros[pos];
        }
    }
    printf("\n\nLa suma de los impares > de 20 es: %d", suma);
    
    //BUSCAR EL MAYOR NUMERO DENTRO DEL ARRAY E INTERCAMBIARLO
    //CON EL DE LA ÚLTIMA POSICIÓN
    mayor=numeros[0];
    for(pos=0;pos<TAM;pos++){
        if(numeros[pos]>mayor){
            mayor=numeros[pos];
            posMayor=pos;
        }
    }
    //intercambiarlos
    aux=numeros[TAM-1];//guardamos el ultimo
    numeros[TAM-1]=mayor;
    numeros[posMayor]=aux;        
    
    
    //VOLVER A MOSTRAR EL CONTENIDO DEL ARRAY 10 POR LINEA
    printf("\n\n");
    for(pos=0;pos<TAM;pos++){
        printf("%d ", numeros[pos]);
        if((pos+1)%10==0){
            printf("\n");
        }
    }
    
    
    printf("\nPulsa ENTER para continuar...");
    getchar();
}
