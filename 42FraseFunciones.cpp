/*PROGRAMA: 
          LEA UNA FRASE POR TECLADO (ARRAY DE 100 CARACTERES).
          MEDIANTE LLAMADAS A LAS SIGUIENTE FUNCIONES MUESTRE 
          POR PANTALLA:
              Número de caracteres de la frase
              Número de palabras de la frase
              Pida una letra por teclado y muestre el numero
              de veces que está esa letra en la frase.
            
FUNCIONES:
          contarCar: Recibe como parámetro un array de caracteres
                     y devuelve el número de caracteres de la
                     frase.
          contarPal: Recibe como parámetro un array de caracteres
                     y devuelve el número de palabras de la frase
                     (las palabras se separan por uno o más 
                     espacios
          contarLetra: Recibe como parámetros un array de caracteres
                       y una letra y devuelve el número de veces que
                       esa letra está dentro de la frase.
*/
#include <stdio.h>

int contCar(char frase[100]){
    int cont;
    
    //UNA FORMA
    int numCar=0;
    for(cont=0;frase[cont]!='\0';cont++){
        numCar++;
    }
    return numCar;
    
    //OTRA FORMA
    for(cont=0;frase[cont]!='\0';cont++);
    return cont;
    
    //OTRA FORMA
    for(cont=0;cont<100;cont++){
        if(frase[cont]=='\0'){
            return cont;
        }
    }
}

int contPal(char frase[100]){
    int cont, contPal;

    //CASO ESPECIAL:
       //saltar todos los espacios iniciales
    cont=0;
    while(frase[cont]==' ' && frase[cont]!='\0'){
        cont++;
    }
    if(frase[cont]=='\0'){
        return 0;
    }
    //cont tiene la pos después del último espacio
    contPal=1;
    for(cont=cont;frase[cont]!='\0';cont++){
        if(frase[cont]==' '){
            contPal++; //y saltar todos los posibles espacios
            while(frase[cont]==' ' && frase[cont]!='\0'){
               cont++;
            }
        }
    }

    cont=contCar(frase);//cont GUARDAMOS LA POS DEL '\0'
    //si el último caracter de la frase es un ESPACIO -> pal--
    if(frase[cont-1]==' '){
        contPal--;
    }
    return contPal;
}

int contLetra(char frase[100], char letra){
    int cont, numVeces;
    numVeces=0;
    for(cont=0;frase[cont]!='\0';cont++){
        if(frase[cont]==letra){
            numVeces++;
        }
    }
    return numVeces;
}

int main(){
    char frase[100];
    char car;
    
    //LEER LA FRASE POR TECLADO (termina con \0)
    printf("Introduce una frase: ");
    gets(frase);
    
    //LLAMAR A LA FUNCIÓN contarCar y mostrar resultado
    printf("Numero de caracteres: %d\n",contCar(frase));
    
    
    
    //LLAMAR A LA FUNCIÓN contarPal y mostrar resultado
    printf("Numero de palabras: %d\n",contPal(frase));    
    //Leer una letra por teclado, LLAMAR A LA FUNCIÓN 
    //contarLetra y mostrar resultado
    printf("Introduce una letra: ");
    scanf("%c", &car);
    fflush(stdin);
    printf("La letra %c aparece %d veces", car, contLetra(frase, car));
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}
