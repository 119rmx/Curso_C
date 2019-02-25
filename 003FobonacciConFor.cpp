#include <stdio.h>



int main(){
    
    int n, x=0,y=1,z=1;
    
     do{
    printf("Cuantos numeros de fibonacci quieres ver? (1-50): ");
    scanf("%d",&n);
    fflush(stdin);
    }while(n<0 || n>50);
    
    
    printf("el fibonacci de 0 es 0\n");
    printf("el fibonacci de 1 es 1\n");
    for(int i=2;i<n;i++){
        z=x+y;
        x=y;
        y=z;    
        printf("el fibonacci de %d  es %d\n",i,z);  
        
     
            
}
    
    
    getchar();
    
    }
