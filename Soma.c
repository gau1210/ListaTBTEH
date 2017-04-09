#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b)
{
	float result;
	
	result= a+b;
	
printf("A soma de %d e %d = %2.f\n",a,b,result);

system("pause");

}

int main()
{
	int a,b;
	
	printf("digite um valor");
    scanf("%d",&a);
    printf("digite outro valor");
    scanf("%d",&b);
    	
	soma(a,b);
	
return 0;

}
     
