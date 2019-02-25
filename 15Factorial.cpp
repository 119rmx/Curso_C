/*LEER POR TECLADO UN NUMERO ENTERO Y MOSTRAR POR PANTALLA 
SU FACTORIAL (EL FACTORIAL SERÁ float o double).

AL MOSTRAR EL RESULTADO PREGUNTARA SI QUEREMOS CALCULAR OTRO.

char resp;


6!=6*5*4*3*2*1
0!=1
NEGATIVO! -> NO EXISTE
EJEMPLO:
        Introduce numero para calcular factorial: 6
        El factorial de 6 es 720
        Quieres calcular otro factorial (S/N)?j
        Quieres calcular otro factorial (S/N)?H
        Quieres calcular otro factorial (S/N)?s
        Introduce numero para calcular factorial: 4
        El factorial de 6 es 24
        Quieres calcular otro factorial (S/N)?n
        
*/

#include <stdio.h>

int main(){
    int num, cont;
    double factorial;
    char resp;
    
    do {
        printf("Introduce un numero: ");
        scanf("%d", &num);
        fflush(stdin);
        
        factorial=1;
        if(num==0){
           printf("El factorial de 0 es 1");
        } 
        else if (num<0){
                printf("No existe el factorial de numeros negativos");
             }
             else {
                      for(cont=num;cont>=1;cont--){
                          factorial=factorial*cont;
                      }
                      printf("El factorial de %d es %0.lf", num, factorial);
                  }


         do {
            printf("Quieres calcular otro factorial (S/N): ");
            scanf("%c", &resp);
            fflush(stdin);
         }while(resp!='s' && resp!='S' && resp!='n' && resp!='N');

     
    }while(resp=='s' || resp=='S');
     
    printf("Pulsa ENTER para finalizar..");
    getchar();
}



 
 






int main() {
    
    do{
    
      pedir numero 
      CALCULAR EL FACTORIAL DE UN NUMERO
      
      preguntar si queremos otro mientras no diga ni si ni no
                ??? -> OTRO BUCLE
      
    }while(RESPONDA QUE SI);
}






