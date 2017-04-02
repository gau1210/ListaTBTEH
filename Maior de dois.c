#include <stdio.h>
#include <stdlib.h>

int maior_de_dois(int a, int b){
    
    if(a>b){
        
        printf("o valorde A e maior %d", a);
    }
        
        if(b<a){
        
        printf("o valorde B e maior %d", b);
    }


}
    int main(){
        
        int a,b;
        
        printf("digite um valor");
        scanf("%d",&a);
        printf("digite um valor");
        scanf("%d",&b);
        maior_de_dois(a,b);
        
        return 0;
        
}
         

        
