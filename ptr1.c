#include<stdio.h>

int main()
{
    int *p,i;
    int a[10];
    p = a;  
    printf("Enter the 10 elements of the array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", (p + i));  
    }
    printf("The array values are:\n");
    for(i=0; i<10;i++)
    {
        printf("%d ", *(p + i));  
    }
    return 0;
}

