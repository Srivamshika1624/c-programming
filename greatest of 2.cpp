#include<stdio.h>
int main()
{
	float a,b;
	printf("enter a and b values");
	scanf("%f%f",&a,&b);
	if(a>b)
	{
	printf("a is greater");
    }
    else if (b>a)
    {
    	printf("b is greater");
	}
	else
	printf("a and b are equal");
	return 0;
}
