/*PROGRAMA QUE MUESTRE POR PANTALLA EL SIGUIENTE MENU DE OPCIONES:
    MENU PRINCIPAL:
    1.- Sumar Pares
    2.- Suma Impares
    3.- Sumar todos
    4.- Fin de programa
    Elige opci�n [1..4]: 

Una vez elegida la opci�n el programa pedir� numeros por teclado
hasta que se teclee el 0 y realizar� la operaci�n seleccionada en 
el men� con los n�meros introducidos por teclado.
Hay que hacerlo con switch ... case
EJEMPLO:
MENU PRINCIPAL:
    1.- Sumar Pares
    2.- Suma Impares
    3.- Sumar todos
    4.- Fin de programa
    Elige opci�n [1..4]: 6
    Elige opci�n [1..4]: 6
    Elige opci�n [1..4]: 6
    Elige opci�n [1..4]: 1
    Introduce numero (0 para terminar): 14
    Introduce numero (0 para terminar): 15
    Introduce numero (0 para terminar): 2
    Introduce numero (0 para terminar): 8
    Introduce numero (0 para terminar): 0
    
    La suma de los pares es: 24
    
    Pulsa ENTER para volver al men�....
    */
#include <stdio.h>

int main(){
    int opc, num, suma;
    
    do{
        mostrarMenu;
        elegir opci�n;
        switch(opc){
            case 1:
                   break; 
            case 2:
                   break;
            case 3:
                   break;
            case 4:
                   break;
            default: 
        }
        mostrar resultado
    }while(opc!=4);
}
