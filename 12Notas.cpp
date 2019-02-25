/*PROGRAMA QUE PIDA POR TECLADO EL NUMERO DE ALUMNOS MATRICULADOS.
A CONTINUACIÓN PEDIRA UNA POR UNA LAS NOTAS DE LOS ALUMNOS 
(NUMERADOS). AL FINAL MOSTRARÁ EL NUMERO DE APROBADOS, ASÍ COMO
LA NOTA MEDIA

EJEMPLO:
        Introduce numero de alumnos: 8
        Ahora introduce las notas una a una:
        Alumno 1: 6.5
        Alumno 2: 7
        Alumno 3: 4.5
        .....
        Alumno 8: 9
        
        El numero de aprobados es: 6
        La nota media es: 7.36*/

#include <stdio.h>

int main(){
    int numAlumnos, cont, numAprobados;;
    float nota, media, sumaNotas;
    
    do {
        printf("Introduce numero de alumnos: ");
        scanf("%d", &numAlumnos);
        fflush(stdin);
    } while(numAlumnos<5 || numAlumnos>20);
    aprobados=0;
    sumaNotas=0;
    printf("Ahora introduce las notas:\n ");
    for(cont=1;cont<numAlumnos; cont++){
        
        do {
            
            printf("Alumno %d: ", cont);
            scanf("%f", &nota);
            fflush(stdin);
        
        }while(nota<0 || nota>10);
        
        
        
        if(nota>=5){
            aprobados++;
        }
        sumaNotas+=nota;//sumaNotas=sumaNotas+nota;
    }
    
    printf("\n\nPulsa ENTER para continuar...");
    getchar();
}
