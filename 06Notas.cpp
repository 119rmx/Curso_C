/*PROGRAMA QUE LEA POR TECLADO UNA NOTA NUMERICA ENTERA
Y MUESTRE POR PANTALLA ESA NOTA EN FORMA DE TEXTO:

    0<NOTA<=2 -> MD ó OG
    3<=NOTA<=4 -> INS ó GUT
    5<=NOTA<6 -> SF ó NAH
    6<=NOTA<7 -> BIEN ó ONDO
    7<=NOTA<=8 -> NOT ó OO
    9<=NOTA<=10 -> SB Ó BIK
    
EJEMPLO:
        Introduce la nota (entre 0 y 10): 9
        Tu nota es NOT - OO
        
        Introduce la nota (entre 0 y 10): 19
        Esa nota no es válida
    
    */
#include <stdio.h>

int main(){
    int nota;
    
    printf("Introduce Nota (1 a 10): ");
    scanf("%d", &nota);
    fflush(stdin);
    switch(nota){
        case 0:
        case 1:
        case 2: printf("Tu nota es MD - OG");
                break;
        case 3:
        case 4: printf("Tu nota es INS - GUT");
                break;
        case 5: printf("Tu nota es SF - NAH");
                break;
        case 6: printf("Tu nota es BIEN - ONDO");
                break;
        case 7:
        case 8: printf("Tu nota es NOT - OO");
                break;
        case 9:
        case 10: printf("Tu nota es SOB - BIK");
                 break;
        default: printf("La nota introducida no es valida");
    }
    
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}




