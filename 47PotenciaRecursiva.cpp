/*FUNCION potencia  8DEVUELVE FLOAT) RECURSIVA QUE DEVUELVA 
EL RESULTADO DE ELEVAR UN NUMERO ENTERO A OTRO NUMERO ENTERO 
MEDIANTE MULTIPLICACIONES SUCESIVAS*/
#include <stdio.h>

float potencia(int base, int exp){
      float res;
      //CASOS BÁSICOS
      if(exp==0){
          return 1;
      }
      else if(exp==1){
               return base;
           }
           else{
                res=base*potencia(base, exp-1);
                return res;
           }
}

int main(){
    float res;
    int base, exp;
    printf("Introduce la base: ");
    scanf("%d", &base);
    fflush(stdin);
    printf("Introduce el exponente: ");
    scanf("%d", &exp);
    fflush(stdin);
    printf("%d elevado a %d = %.0f\n", base, exp, potencia(base, exp));
    
    printf("\nPulsa ENTER para finalizar...");
    getchar();
}
