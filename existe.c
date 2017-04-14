#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void existe(int vect[], int posi, int x){

    int i, cont=0;

    for(i=0;i<posi;i++){

    if(vect[i]==x)

         cont++; 
           
    }
    
    printf("O valor ocorre:\n%d",cont);

}

int man (){

    int vect[100],posi,x;

    printf("digite a quantidade de posicoes");
    scanf("%d",&posi);

    printf("digite um valor");
    scanf("%d",&x);

    existe(x,cont,posi);

    return 0;	

}
