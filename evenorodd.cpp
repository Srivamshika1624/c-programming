#include<stdio.h>
int main()
{
    int x;
    printf("Enter x value:\n");
    scanf("%d",&x);
    if(x % 2 == 0)
    {
        printf("Number is even");
    }
    else
    printf("number is odd");
    return 0;
}
