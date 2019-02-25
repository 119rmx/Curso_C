/*ADIVINAR UN NUMERO ENTRE 1 Y 1000 PENSADO POR EL ORDENADOR.
DISPONEMOS DE UN MÁXIMO DE 10 INTENTOS.
EJEMPLO:
     Adivina el numero que he pensado. tienes 10 intentos /710):
     1: [1..1000] 500
     2: [500..1000] 750
     3: [500..750] 675
     4: [675..750] 710
     Correcto. Has acertado en 4 intentos
*/

#include <stdio.h>

int main(){
    int num, intentos, max, min, aleatorio;
    


    
    Inicialización
    mientras no fin de juego {
         pedir numero
         acotar max y min en función del numero
         actualizar intentos
    }
    
    mostrar mensaje final (resultado)
    
    srand(time(NULL));
    aleatorio=rand()%1000+1;
    
    intentos=1;
    min=1;
    max=1000;
    do{
       scanf("%d", &num);
       ...;
    }while(num!=aleatorio || intentos<=10);
    
    
    
    
    printf("\n\nPulsa ENTER para finalizar...");
    getchar();    
}

