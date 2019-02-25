/*PROGRAMA: 
          LEA UNA FRASE POR TECLADO (ARRAY DE 100 CARACTERES).
          MEDIANTE LLAMADAS A LAS SIGUIENTE FUNCIONES MUESTRE 
          POR PANTALLA:
              N�mero de caracteres de la frase
              N�mero de palabras de la frase
              Pida una letra por teclado y muestre el numero
              de veces que est� esa letra en la frase.
            
FUNCIONES:
          contarCar: Recibe como par�metro un array de caracteres
                     y devuelve el n�mero de caracteres de la
                     frase.
          contarPal: Recibe como par�metro un array de caracteres
                     y devuelve el n�mero de palabras de la frase
                     (las palabras se separan por uno o m�s 
                     espacios
          contarLetra: Recibe como par�metros un array de caracteres
                       y una letra y devuelve el n�mero de veces que
                       esa letra est� dentro de la frase.
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
    //cont tiene la pos despu�s del �ltimo espacio
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
    //si el �ltimo caracter de la frase es un ESPACIO -> pal--
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
    
    //LLAMAR A LA FUNCI�N contarCar y mostrar resultado
    printf("Numero de caracteres: %d\n",contCar(frase));
    
    
    
    //LLAMAR A LA FUNCI�N contarPal y mostrar resultado
    printf("Numero de palabras: %d\n",contPal(frase));    
    //Leer una letra por teclado, LLAMAR A LA FUNCI�N 
    //contarLetra y mostrar resultado
    printf("Introduce una letra: ");
    scanf("%c", &car);
    fflush(stdin);
    printf("La letra %c aparece %d veces", car, contLetra(frase, car));
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}
