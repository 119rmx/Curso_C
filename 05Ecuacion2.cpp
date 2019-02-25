/*PROGRAMA QUE PIDA LOS TRES TERMINOS DE UNA ECUACION DE
SEGUNDO GRADO Y MUESTRE POR PANTALLA LA SOLUCION O
SOLUCIONES
2x2+x-4=0->res1=1,poco, res2=casi -2

*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float res1, res2;
    //PEDIR DATOS POR TECLADO
    printf("Introduce el termino A: ");
    scanf("%d", &a);
    fflush(stdin);
    printf("Introduce el termino B: ");
    scanf("%d", &b);
    fflush(stdin);
     printf("Introduce el termino C: ");
    scanf("%d", &c);
    fflush(stdin);
    //CONTROLAR LOS 4 CASOS POSIBLES (A LO MEJOR HAY MÁS) 
    /*si a, b y c son 0-> no es una ecuación
    si no
    si a*a-4*a+c<0 -> no tiene solucion
    sino
    si a=0 -> No es de 2º grado: solo una solucion: -c/b
    sino
    cualquier otro caso -> dos soluciones*/
 
    if(a==0 && b==0 && c==0){
        printf("Eso no es una ecuacion.");
    }
    else if(b*b-4*a*c<0){
             printf("Esa ecuación no tiene solucion...");
         }
         else if(a==0){
                  printf("No es de 2º grado. Solo una solucion:\n");
                  res1=-c/(float)b;
                  printf("%.2f", res1);
              }
              else {
                  res1=(-b+sqrt(b*b-4*a*c))/(2*a);
                  res2=(-b-sqrt(b*b-4*a*c))/(2*a);
                  printf("Las dos soluciones son: %f y %f", res1, res2);
              }
    
    
    printf("Pulsa ENTER para continuar...");
    getchar();
    
}



