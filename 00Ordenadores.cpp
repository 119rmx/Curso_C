#include <stdio.h>



int main(){
    int numOrd, numImp;
    float importeOrd, importeImp, importeTotal;
    
    do {//obligar al usuario a introducir numero de odenadores>0
        printf("Introduce numero de ordenadores: ");
        scanf("%d", &numOrd);
        fflush(stdin);
    }while(numOrd<0);
    
    do {//obligar al usuario a introducir numero de impresoras>0
        printf("Introduce numero de impresoras: ");
        scanf("%d", &numImp);
        fflush(stdin);
    }while(numImp<0);
    
    importeOrd=numOrd*800;
    importeImp=numImp*200;
    
    if(numOrd>5){//si son más de 5 ordenadores se descuenta el 8%
         importeOrd=importeOrd-importeOrd*8.0/100.0;
    }
    if(numImp>5){//si son más de 5 impresoras se descuenta el 6%
         importeImp=importeImp-importeImp*6.0/100.0;
    }
    importeTotal=importeOrd+importeImp;
    if(importeTotal>3000){//si el importe total supera los 3000€ 
                          //aplicamos un descuento del 1%
        importeTotal=importeTotal-importeTotal*1/100;
    }
    printf("El importe total es: %.2f", importeTotal);
    
    printf("\n\nPulsa ENTER para finalizar...");
    getchar();
}
