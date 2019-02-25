#include <stdio.h>

/*PROGRAMA QUE CALCULE Y MUESTRE POR PANTALLA EL AREA DE 
UN TRIANGULO CUYA BASE Y ALTURA SE INTRODUCEN POR TECLADO*/
int main(){
    //DECLARACION DE VARIABLES
    int base, altura;
    float area;
    //INICIALIZACIÓN DE VARIABLES
    printf("Introduce base: ");
    scanf("%d", &base);
    fflush(stdin);
    printf("Introduce altura: ");
    scanf("%d", &altura);
    fflush(stdin);
    //OPERACIONES O INSTRUCCIONES
    area=(float)base*altura/2;
    //MOSTRAR RESULTADOS
    printf("\n\nEl area es: %.2f", area);
    
    printf("\n\nPulsa ENTER para terminar...");
    getchar();
}
