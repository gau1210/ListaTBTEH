#include <stdio.h>
#include <stdlib.h>

float opera ( float a, float b, int c){
    
    float result;
    
    if (c==0){
        
       result= a+b;
       return result;
        
    }
        if (c==1){
            
        result= b-a;
        return result;
            
        }
        
        if (c==2){
            
        result= a/b;
        return result;
            
        }
        if(c==3){
            
         result= a*b;
         return result;
       
        }
  
    }
    
    
int main(){
    
    float a=3,b=2, result;
    int c;
    
    printf("digite um para soma; dois para subitração; tres para multiplicar");
    scanf("%d",&c);
    
    opera(a,b,result);
    printf("%f",result);
      
    return 0;
    
}
            
            
