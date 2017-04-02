#include <stdio.h>
#include <stdlib.h>

int menor_de_tres(int a, int b, int c){
    
    if((a<=b)&&(a<=c)){
        
        printf("o valor de A e menor %d", a);
    }
        
        if(b<=c){
        
        printf("o valor de B e menor %d", b);
    }else{
        
        printf("o valor de C e menor %d", c);
    }


}
    int main(){
        
        int a,b,c;
        
        printf("digite um valor");
        scanf("%d",&a);
        printf("digite um valor");
        scanf("%d",&b);
        printf("digite um valor");
        scanf("%d",&c);
        
        
        menor_de_tres(a,b,c);
        return 0;
        
}
