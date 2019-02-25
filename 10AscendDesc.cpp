/*PROGRAMA QUE LEA DOS NUMEROS POR TECLADO Y MUESTRE TODOS LOS 
NUMEROS COMPRENDIDOS ENTRE AMBOS, PRIMERO DE MENOR A MAYOR Y
LUEGO DE MAYOR A MENOR
EJEMPLO:
        Introduce un numero: 6
        Introduce otro numero: 11
        6 7 8 9 10 11
        11 10 9 8 7 6
        
        Introduce un numero: 11
        Introduce otro numero: 6
        6 7 8 9 10 11
        11 10 9 8 7 6
*/

for(a=1;a<10;a++)
for(a=15;a>=1;a--)
for(a=1;a<=num;a++)

for(a=num1;a<=num2;a++)



#include <stdio.h>

int main(){
    int num1, num2, cont;
    printf("Introduce un numero: ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Introduce un numero: ");
    scanf("%d", &num2);
    fflush(stdin);
    
    /*si num1<num2
        escribirlos desde num1 hasta num2 ascendente
        escribirlos desde num2 hasta num1 descendente
    sino
        escribirlos desde num2 hasta num1 ascendente
        escribirlos desde num1 hasta num2 descendente        
    */
    if(num1<num2){    
        for(cont=num1;cont<=num2;cont++){
            printf("%d ", cont);
        }
        printf("\n");
        for(cont=num2;cont>=num1;cont--){
            printf("%d ", cont);
        }
    }
    else {
        for(cont=num2;cont>=num1;cont--){
            printf("%d ", cont);
        }
        for(cont=num1;cont<=num2;cont++){
            printf("%d ", cont);
        }
    }

    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}
