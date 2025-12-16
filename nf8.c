#include<stdio.h>
int main()
{
    int i,j,k;
    for(j=1;j<=4;j++)
    {
    	for(k=1;k<=4-j;k++)
    	{
    		printf("  ");
        }
        for(i=1;i<=j;i++)
        {
        printf("* ");
        }
        printf("\n");
        }
    return 0;
}
