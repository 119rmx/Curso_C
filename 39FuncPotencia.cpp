/*FUNCION POTENCIA QUE DEVUELVA COMO FLOAT EL RESULTADO DE UN 
NUMERO ENTERO POS O NEG ELEVADO A OTRO ENTERO POSITIVO O 
NEGATIVO RECIBIDOS COMO PARÁMETROS.
    2 ELEVADO A 6 = 2*2*2*2*2*2 = 64
    5 ELEVADO A 0 = 1
    -5 ELEVADO A 3 = (-5)*(-5)*(-5) = -125

    3 ELEVADO A -4 = 1 / (3 ELEVADO A 4)

PROGRAMA PRINCIPAL:
         LEER LA BASE Y EL EXPONENTE POR TECLADO Y MOSTRAR 
         LA POTENCIA RESULTANTE.
*/

#include <stdio.h>

float potencia(int base, int exp){
    int cont, aux;
    float res;
    aux=exp; //GUARDO EL EXPONENTE ORIGINAL
    if(exp<0){ //SI EL EXPONENTE ES NEGATIVO LO CAMBIO DE SIGNO
        exp=-exp; //exp=exp * (-1)
    }
    
    res=1;
    for(cont=1;cont<=exp;cont++){//CALCULA LA POTENCIA
        res=res*base;
    }
    
    if(aux<0){//SI EL EXPONENTE ERA NEGATIVO SE PONE 1 ENTRE RES
       res=1/res;
    }
    return res;
}





int main(){
    int num1 ,num2;
    float res;
    
    printf("Introduce un numero: ");
    scanf("%d", &num1);
    fflush(stdin);
    
    printf("Introduce un numero: ");
    scanf("%d", &num2);
    fflush(stdin);
    res=potencia(num1, num2);
    printf("%d elevado a %d = %f", num1, num2, res);
    printf("\n\nPulsa ENTER para finalizar..:");
    getchar();
}
