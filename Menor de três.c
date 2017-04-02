#include <stdio.h>
#include <stdlib.h>

int maior_de_dois(int a, int b, int c){
    
    if((a<=b)&&(a<=c)){
        
        printf("o valor de A e maior %d", a);
    }
        
        if(b<=c){
        
        printf("o valor de B e maior %d", b);
    }else{
        
        printf("o valor de C e maior %d", c);
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
        
        
        maior_de_dois(a,b,c);
        return 0;
        
}
