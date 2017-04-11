#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 void compoe(int a, int b)
{
    
    float real=(float)b;
    
    while (real>1)
        
    real*=0.1;                
    real+=(float)a; 
    
    printf("O valor e:%f",real);   
    system("pause");
 
}

 int main(){
        
        int a,real;
        float b;
       
        
        printf("digite um valor inteiro");
        scanf("%d",&a);
        printf("digite um valor fracionado");
        scanf("%f",&b);
        
        compoe(a,real);
        return 0;       
}
