/*PROGRAMA QUE LEA UN NUMERO POR TECLADO Y ME DIGA SI EL 
NUMERO LEIDO ES PRIMO O NO

NUMERO QUE SOLO ES DIVISIBLE ENTRE 1 Y ENTRE SI MISMO
NUMERO QUE SOLO TIENE DOS DIVISORES: 1 Y ÉL MISMO
*/

#include <stdio.h>
int main(){
    int num, cont, i;
    
    cont=0;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    fflush(stdin);
    
    for(i=2;i<=num/2+1;i++){
        if(num%i==0){
            cont++;
            break;
        }
    }
    
    if(cont==1){
        printf("El numero NO es primo");
    }
    else{
         printf("El numero SI es primo");
    }
    
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}
