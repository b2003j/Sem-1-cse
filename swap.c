#include<stdio.h>

int main ()
{
	int a,b,c;
	printf("enter frist number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("number ia a :%d",a);
	printf("numer is b :%d",b);
	return 0;
	
}