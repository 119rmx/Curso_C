/*PROGRAMA QUE LEA DOS NUMEROS POR TECLADO Y LOS ALMACENE
EN DOS VARIABLES.
MOSTRAR POR PANTALLA SUS VALORES.
A CONTINUACION DEBE INTERCAMBIAR EL VALOR DE AMBAS 
VARIABLES.
VOLVER A MOSTRAR SU VALOR

SALIDA POR PANTALLA:
       INTRODUCE N1: 7
       INTRODUCE N2: 15
       N1=7 y N2=15
       HE INTERCAMBIADO SUS VALORES. AHORA:
       N1=15 y N2=7

*/

int main() {
    //
    int num1, num2, aux;
    //LEER NUMEROS
    printf("Introduce el numero 1: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Introduce el numero 2: ");
    scanf("%d", &num2);
    fflush(stdin);
    //MOSTRAR ANTES DE INTERCAMBIAR
    printf("Ahora Num1=%d y Num2=%d", num1, num2);

    //INTERCAMBIAR LAS VARIABLES
    aux=num1;
    num1=num2;
    num2=aux;

    //MOSTRAR DESPUES DE INTERCAMBIAR
    printf("Ahora num1=%d y num2=%d", num1, num2);
    
    printf("Pulsa ENTER para continuar...");
    getchar();
}
    
    
    
    
    
    
