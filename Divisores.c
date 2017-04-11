#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void divisores(int a, int b[])
{

int i,num=0;
int div;
	
if(a>0){

	for(i=1;i<=a;i++){

		div= a%i;

		if(div== 0){

			b[num]=i;
			num++;

			printf("O valor e:%d\n",i);

			}
		}
	}
}

int main()
{
	int a;
	int div[100];

	printf("digite um valor");
	scanf("%d",&a); 

	divisores(a,div);
	return 0;
}
