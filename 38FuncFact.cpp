/*FUNCIÓN:
      FACTORIAL: FUNCIÓN QUE RECIBE COMO PARÁMETRO UN NUMERO
                 ENTERO Y DEVUELVE SU FACTORIAL COMO FLOAT. SI
                 RECIBE UN NUMERO NEGATIVO, DEVOLVERÁ -1 (o 0).
          6!=6*5*4*3*2*1
PROGRAMA PRINCIPAL:
     PROGRAMA QUE LEA UN NUMERO ENTRE 1 Y 20 POR TECLADO Y 
     MUESTRE TODOS LOS FACTORIALES DESDE 1 HASTA DICHO NUMERO.

*/

#include <stdio.h>

float factorial(int num){
     int cont;
     float fact;
     if(num<0){
        return 0;
     }
     fact=1;
     for(cont=num;cont>=1;cont--){
         fact=fact*cont;
     }
     return fact;
}


int main(){
    int num, cont;
    float fact;
    
    do {
        printf("Introduce un numero (1-29): ");
        scanf("%d", &num);
        fflush(stdin);
    }while(num<1 || num>20);

    for(cont=1;cont<=num;cont++){  
        fact=factorial(cont);
        printf("%d! = %.0f\n", cont, fact);
    }
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}






