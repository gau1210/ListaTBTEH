#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 float compoe(int a, int b)
{
    
    float real,inteiro,valor,result;
    real=(float)b;
    inteiro=(float)a;
    
    while (real>1.0){
        
        valor=real*0.1;
    }
    result=valor+inteiro;
    
    printf("O valor e:%d",result);  
}

 int main(){
        
        int a, b;
        
        printf("digite um valor inteiro");
        scanf("%d",&a);
        printf("digite um valor fracionado");
        scanf("%d",&b);
        
        //compoe(a,b,result);
        return 0;       
}
