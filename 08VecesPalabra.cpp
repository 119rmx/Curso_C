/*PROGRAMA QUE PIDA UN NUMERO POR TECLADO Y UNA PALABRA.
SI ES MENOR QUE 0 VOLVERÁ A PEDIRLO HASTA QUE SEA 0 o POSITIVO
SI EL NUMERO ES POSITIVO, ESCRIBIRÁ POR PANTALLA LA PALABRA
TANTAS VECES COMO INDIQUE EL NUMERO.
SI ES 0 -> EL PROGRAMA FINALIZA MOSTRANDO EL MENSAJE FIN

EJEMPLO:
        Introduce una palabra: DAM1
        Introduce un numero: -5
        Introduce un numero: -7
        Introduce un numero: -12
        Introduce un numero: 2
        DAM1
        DAM1
        


variables para guardar texto:
          Declaran:
              char palabra[100];
          Utilizan:
              scanf("%s",palabra);
              printf("... %s ....", palabra);
*/              
  
#include <stdio.h>

int main(){
    int num, cont;
    char palabra[20];            
    
    printf("Introduce palabra: ");
    scanf("%s", palabra);
    fflush(stdin);
    printf("Introduce numero de veces: ");
    scanf("%d", &num);
    fflush(stdin);
    
              
              
              
