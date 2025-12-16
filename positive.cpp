#include<stdio.h>
int main()
{
	float a;
	printf("enter a value");
	scanf("%f",&a);
	if(a>0)
	{
		printf("a is positive");
	}
	else if(a<0)
	{
		printf("a is negative");
	}
	else
	printf("a is zero");
	return 0;
}
