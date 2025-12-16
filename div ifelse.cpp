#include<stdio.h>
int main()
{
    float n,d,div;
    printf("Enter numerator:\n");
    scanf("%f",&n);
    printf("Enter denominator:\n");
    scanf("%f",&d);
    if(d!=0)
    {
        div=n/d;
        printf("Division=%f\n",div);
    }
    else
	{
    	printf("Enter another value in denominator\n");
    }
    	return 0;
}
