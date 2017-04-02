#include <stdio.h>
#include <stdlib.h>

int maior_de_quatro(int a, int b, int c, int d){
    
    if((a>=b)&&(a>=c)&&(a>=d)){
        
        printf("o valor de A e maior %d", a);
    }
    
    if ((b>=a)&&(b>=c)&&(b>=d)){
        
        printf("o valor de B e maior %d", b);
    }
    
    if ((c>=a)&&(c>=b)&&(c>=d)){
        
        printf("o valor de C e maior %d", c);
        
    }else{
        
        printf("o valor de C e maior %d", d);
    }

}
    int main(){
        
        int a,b,c,d;
        
        printf("digite um valor");
        scanf("%d",&a);
        printf("digite um valor");
        scanf("%d",&b);
        printf("digite um valor");
        scanf("%d",&c);
        printf("digite um valor");
        scanf("%d",&d);
        
        maior_de_quatro(a,b,c,d);
        return 0;
        
}
