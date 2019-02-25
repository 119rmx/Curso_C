/*PROGRAMA QUE LEA DEL FICHERO "DATOS.TXT" UNA LISTA DE NOMBRES, 
EDADES Y NOTAS Y LOS MUESTRE POR PANTALLA.
ADEMÁS COPIARÁ EN EL ARCHIVO "SALIDA.TXT" AQUELLOS QUE SOBREPASEN
LOS 22 AÑOS (UNO POR LÍNEA).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fIn, *fOut;
    char nombre[20];
    int edad;
    float nota;
    //ABRIR FICHEROS
    if((fIn=fopen("datos.txt", "r+"))==NULL){
        printf("No existe el fichero");
        exit(0);
    }
    fOut=fopen("salida.txt","w+");
    /*mientras no fin de fichero ENTRADA.TXT
             Leer nombre edad y nota de entrada.txt
             Escribir por pantalla nombre edad y nota
             si la edad es mayor de 22
                Escribir en salida.txt nombre edad nota
             finsi
    finmientras*/
    printf("NOMBRE EDAD NOTA\n");
    while(!feof(fIn)){
         fscanf(fIn,"%s", nombre);
         fscanf(fIn, "%d", &edad);
         fscanf(fIn, "%f", &nota);
         //fscanf(fIn, "%s %d %f", nombre, &edad, &nota);
         printf("%s %d %.2f\n", nombre, edad, nota);
         if(edad>=22){
             fprintf(fOut, "%s %d %.2f\n", nombre, edad, nota);         
         }
    }
    fclose(fIn);
    fclose(fOut);
    printf("\n\nPulsa ENTER para finalizar...");
    getchar();
    
}






