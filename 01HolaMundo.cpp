#include <stdio.h>

//PROGAMA QUE MUESTRA POR PANTALLA EL MESAJE "HOLA MUNDO" Y 
//UN NUMERO QUE METAMOS POR TECLADO
/*Tipos de datos básicos en C
        int -> enteros
        float -> decimales
        double -> decimales más rango
        char -> caracter individual
        bool -> valores booleanos (T/F)
        */


int main(){
    //DECLARACIÓN DE VARIABLES
   int num;
   //leer del teclado un numero
   printf("Introduce un numero: ");
   scanf("%d",&num);
   //vaciar buffer de entrada
   fflush(stdin);
   
   //MOSTRAR RESULTADOS
   //printf("Mensaje (incluyendo caract. de formateo"
   printf("\n\nHola Mundo. El numero tecleado es %d\n\n", num);
   
   //parar la pantalla para ver resultados
   printf("Pulsa Enter para terminar...");
   getchar();
}
   
   
   
   
    
