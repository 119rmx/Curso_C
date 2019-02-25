/*función recursiva que calcule y devuelva como resultado float 
el numero de fibonacci de un numero entero.

fib(N)=fib(N-1)+fib(N-2)

Programa que muestre por pantalla los 15 primeros 
numeros de fibonacci*/

#include <stdio.h>
float fibonacci(int num){
      float res;
      //CASOS BÁSICOS
      if(num==0 || num==1){
          return num;
      }
      else{
           res=fibonacci(num-1)+fibonacci(num-2);
           return res;
      }
}

int main(){
    float res;
    int num, cont;
    printf("Cuantos numeros de fibonacci quieres ver? (1-50): ");
    scanf("%d", &num);
    fflush(stdin);
    for(cont=0;cont<=num;cont++){
        res=fibonacci(cont);
        printf("Fib(%d)=%.0f\n", cont, res);
    }
    
    printf("\nPulsa ENTER para finalizar...");
    getchar();
}







