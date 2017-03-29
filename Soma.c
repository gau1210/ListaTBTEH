#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b)
{
	float result;
	
	result= a+b;
	
printf("A soma de %d e %d = %2.f\n",a,b,result);

}
int main()
{
	int a;
	float b;
	
	a=2;
	b=3;
	
	soma(a,b);
	
return 0;

}
