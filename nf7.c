#include<stdio.h>
int main()
{
    int i,j;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=j;i++)
        {
        printf("* ",j);
        }
        printf("\n");
    }
    return 0;
}
