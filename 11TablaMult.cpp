/*PROGRAMA QUE LEA UN NUMERO POR TECLADO. EL PROGRAMA MOSTRARÁ
POR PANTALLA LA TABLA DE MULTIPLICAR DE ESE NUMERO DE 1 A 10.
SI EL USUARIO INTRODUCE UN NUMERO NEGATIVO, EL PROGRAMA VOLVERÁ 
A PEDIR OTRO HASTA QUE INTRODUZCA UNO POSITIVO.

EJEMPLO:
        Introduce un numero positivo: -8
        Introduce un numero positivo: -6
        Introduce un numero positivo: 9
        9 x 1 = 9
        9 x 2 = 18
        9 x 3 = 27
        .....
        9 x 10 = 90
*/

#include <stdio.h>

int main(){
    int num, res, cont;
 
   /* printf("Introduce un numero positivo: ");
    scanf("%d", &num);
    fflush(stdin);
    while (num<0){
        printf("Introduce un numero positivo: ");
        scanf("%d", &num);
        fflush(stdin);
    }*/
  
    do {
        printf("Introduce un numero positivo: ");
        scanf("%d", &num);
        fflush(stdin);
    }while(num<0);
        
    //MOSTRAR LA TABLA DE MULTIPLICAR
    for(cont=1;cont<=10;cont++){
        res=num*cont;
        printf("%d x %d = %d\n", num, cont, res);
    }
    
    printf("Pulsa ENTER para continuar...");
    getchar();
  
}    
    
    
    
    
    
    
    
     
        
