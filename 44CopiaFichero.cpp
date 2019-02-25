/*PROGRAMA QUE LEA LOS NOMBRES DE DOS ARCHIVOS: ORIGEN Y DESTINO
EL PROGRAMA REALIZARÁ UNA COPIA DEL CONTENIDO DEL FICHERO ORIGEN 
SOBRE EL FICHERO DESTINO.

Si ORIGEN No Existe: Mensaje y no hacer nada
SI DESTINO existe: Pedir Confirmación de sobreescribir:
                         Respuesta NO: No hacer nada
                         Respuesta SI: Realizar la copia y mensaje
                                       "copia realizada"

leer origen
si NO existe
   mensaje: fichero no existe. No se puede copiar
   exit
finsi
leer destino
si el destino Existe
   mensaje: Cuidado. El fich destino ya existe ¿Sobreescribir?
   si respuesta es NO
      Mensaje: fichero no copiado
      exit
   sino
       COPIAR EL FICHERO ORIGEN SOBRE EL DESTINO
   finsi
sino (EL FICHERO NO EXISTE)
     COPIAR EL FICHERO ORIGEN SOBRE EL DESTINO
finsi
   
*/




#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *forig, *fdest;
    char origen[50], destino[50];
    char linea[200];//PARA UTILIZAR fgets y fputs
    char resp, car;
    system("dir");
    printf("PROGRAMA PARA REALIZAR COPIA DE UN ARCHIVO DE TEXTO:\n\n");
    printf("Introduce archivo origen: ");
    gets(origen);
    fflush(stdin);
    if((forig=fopen(origen,"r+"))==NULL){
        printf("El fichero origen NO existe");
        getchar();
        exit(0);
    }
    
    printf("Introduce archivo destino: ");
    gets(destino);
    fflush(stdin);    
    if((fdest=fopen(destino,"r+"))!=NULL){
        printf("CUIDADO!! Destino YA existe. ¿Sobreescribir?(S/N): ");
        scanf("%c", &resp);
        fflush(stdin);
        if(resp=='S' || resp=='s'){//SOBREESCRIBIR EL DESTINO
            //COPIAR EL ARCHIVO
            fdest=fopen(destino, "w+");
            while(!feof(forig)){
                car=fgetc(forig);
                fputc(car, fdest);
            }
            
            //CON fgets y fputs
            while(!feof(forig)){
                fgets(linea, 200, forig);
                fputs(linea, fdest);
            }
            
            printf("Fichero copiado con exito..:\n\n");
            fclose(forig);
            fclose(fdest);
        }
    }else{//EL DESTINO NO EXISTE. LO CREAMOS
        fdest=fopen(destino, "w+");
        while(!feof(forig)){
            car=fgetc(forig);
            fputc(car, fdest);
        }
        printf("Fichero copiado con exito..:\n\n");
        fclose(forig);
        fclose(fdest); 
    }
    
    printf("Pulsa ENTER para continuar...");
    getchar();
}
    
    
    
    
