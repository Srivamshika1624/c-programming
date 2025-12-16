#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a and b=%d%d",a,b);
	return 0;
}
