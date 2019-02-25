/*FICHEROS:
         ELEMENTOS DE ALMACENAMIENTO PERMANENTE DE INFORMACIÓN
         
OPERACIONES:
            1º: SE ABREN
            2º            
            MODIFICAR
            LEER
            AÑADIR (ESCRIBIR)
            3º: SE CIERRAN
            
VARIABLES PARA GESTIONAR FICHEROS:
      DECLARACIÓN
          FILE *f;         
      ABRIR:
          f=fopen("ruta", "r+");
      CERRAR:
          fclose(f);
      ESCRIBIR:
           1) Caracter: fputc(car, fichero)
           2) String (cadena de char): fputs
           3) Con formato: fprintf
      LEER:
          1) Caracter: fgetc(fichero)
          2) String (cadena de char): fgets
          3) Con formato: fscanf
*/

/*PROGRAMA QUE LEA EL CONTENIDO DE UN FICHERO CARACTER A
CARACTER Y LO MUESTRE POR PANTALLA*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    char letra;
    char fichero[50];
    /*//ABRIR EL FICHERO
    f=fopen("prueba.txt", "r+");
    //COMPROBAR SI EXISTE
    if(f==NULL){
        printf("El fichero no existe");
    }*/
   
    //pedir por teclado el nombre del archivo que queremos leer
    //incluyendo la ruta de acceso si es necesario)
    system("dir *.cpp");
    printf("\n\nNombre del fichero: ");
    gets(fichero);
    fflush(stdin);
    //ABRIR EL FICHERO Y COMPROBAR SI EXISTE
    if((f=fopen(fichero,"r+"))==NULL){
        printf("El fichero no existe.");                              
    }
    else{//FICHERO ABIERTO
         while(!feof(f)){
             //leer un caracter del fichero
             letra=fgetc(f);
             //mostrarlo por pantalla             
             printf("%c", letra);
         }
         fclose(f);
    }   
    
    
   printf("\n\nPulsa ENTER para continuar...");
   getchar();
}           
          
          
          
            
      
