/*PROGRAMA QUE LEA UN NUMERO POSITIVO POR TECLADO Y MUESTRE POR 
PANTALLA TODOS LOS NUMEROS ENTRE EL TECLEADO Y EL CERO EN ORDEN
DESCENDENTE DE DOS EN DOS, mostrando 10 numeros por fila.
EJEMPLO:
        Introduce un numero positivo: -6
        Introduce un numero positivo: 15
        15 13 11 9 7 5 3 1 
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int num, cont, cont2;
    
    do {
        printf("Introduce un numero positivo: ");
        scanf("%d",&num);
        fflush(stdin);
    }while (num<0); 
    
    cont2=0;
    for(cont=num;cont>=0;cont-=2){
        printf("%d ", cont);
        
        //UNA FORMA DE MOSTRAR 10 POR LINEA
        cont2++;
        if(cont2%10==0){
             printf("\n");                
        }
        
        //OTRA FORMA
        cont2++;
        if(cont2==10){
            printf("\n");
            cont2=0;
        }
    }
    /*
    //AHORA CON UN WHILE
    cont=num;
    while(cont>=0){
        printf("%d ", cont);
        cont=cont-2;
    }*/
    
    
    printf("Pulsa ENTER para continuar...");
    getchar();
}
