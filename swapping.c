#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("the value of a=%d and value of b=%d\n",a,b);
	return 0;
}
