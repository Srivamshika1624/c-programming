#include<stdio.h>
int main()
{
    int i,j,k,temp=1,count=4-i;
    for(j=1;j<=4;j++)
    {
    	for(k=1;k<=4-j;k++)
    	{
    		printf("  ");
        }
        for(i=1;i<=temp;i++)
        {
        printf("* ");
        }
        count--;
        temp=temp+2;
        printf("\n");
        }
    return 0;
}
