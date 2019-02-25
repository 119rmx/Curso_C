/*PROGRAMA QUE LEA UN NUMERO POR TECLADO Y MUESTRE POR PANTALLA
LOS MULTIPLOS DE 3 DESDE EL 3 HASTA EL NUMERO INTRODUCIDO POR
TECLADO.
EJEMPLO:
        Introduce un numero: 25
        Los multiplos de 3 entre 1 y 25 son:
            3 6 9 12 15 18 21 24
*/
#include <stdio.h>

int main(){
    int num, cont;
    
    printf("INTRODUCE UN NUMERO: ");
    scanf("%d", &num);
    fflush(stdin);
    
    for(cont=3;cont<=num;cont+=3){
        printf("%d ", cont);
    }
   
    //OTRA FORMA
    for(cont=1;cont<=num;cont++){
        if(cont%3==0){
            printf("%d ", cont);
        }
    }
    
    printf("\n\n\nPulsa ENTER para continuar...");
    getchar();
}
