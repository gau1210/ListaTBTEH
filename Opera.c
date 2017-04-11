#include <stdio.h>
#include <stdlib.h>

float opera ( float a, float b, int c){
    
    float result;
    
    if (c==0)
        
       result= a+b;
        
    
        if (c==1)
            
        result= b-a;
            

        
        if (c==2)
            
        result= a/b;
            
  
        if(c==3){
            
         result= a*b;
         
    }
       printf("%f",result);
       system("pause");
            
}
       
int main(){
    
    float a,b,result;
    int c;
    
    printf("digite um valor");
    scanf("%f",& a);
    printf("digite um valor");
    scanf("%f",& b);
    printf("digite 0 para soma; 1 para subitração; 2 para dividi; 3 para multiplicar");
    scanf("%d",&c);
    
    opera(a,b,result);
    return 0;
    
}             
            
