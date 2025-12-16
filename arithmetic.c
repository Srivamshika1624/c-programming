#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,div;
	printf("enter a and b values");
	scanf("%d %d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("addition=%d,subraction=%d,multiplication=%d,division=%d",add,sub,mul,div);
	return 0;
}
