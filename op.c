#include<stdio.h>
int main()
{
	float a,b,c;
	char ch;
	printf("enter an arithmetic character");
	scanf("%c",&ch);
	printf("enter a and b values");
	scanf("%f %f",&a,&b);
	switch(ch)
	{
	case '+': c=a+b;
	printf("addition=%f",c);
	break;
	case '-': c=a-b;
	printf("subraction=%f",c);
	break;
	case '*': c=a*b;
	printf("multiplication=%f",c);
	break;
	case '/': c=a/b;
	printf("division=%f",c);
	break;
	default:printf("enter only +,-,*,/ values");
	}
	return 0;
}
