/*FUNCION FACTORIAL DE FORMA RECURSIVA. RECIBE UN INTEGER
Y DEVUELVE SU FACT. EN FLOAT

PROGRAMA PRINCIPAL:
         LEE NUMEROS POR TECLADO HASTA QUE SE TECLEE EL 0,
         Y MOSTRARÁ POR PANTALLA SU FACTORIAL (LLAMANDO A LA
         FUNCIÓN FACTORIAL RECURSIVA)
*/

#include <stdio.h>

float factorial(int num){
      float res;
      //CASOS BÁSICOS: num==1, num==0
      if(num==1 || num==0){
         return 1;
      }else{
            res=num*factorial(num-1);
            return res;
      }
}

int main(){
    float res;
    int num;
    
    do{
        printf("Introduce un numero (>0): ");
        scanf("%d", &num);
        fflush(stdin);
        if(num>=0){
            res=factorial(num);
            printf("%d! = %.0f\n",num, res);
        }
        else{
             printf("No existe el factorial de numeros negativos\n\n");
        }
    }while(num!=0);
    
    printf("\n\nPulsa ENTER para finalizar..");
    getchar();
}






