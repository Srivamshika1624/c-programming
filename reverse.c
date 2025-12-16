#include<stdio.h>
int main()
{
    int n, sum = 0, rem;
    printf("Enter n value:\n");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;          
        sum = (sum * 10) + rem; 
        n = n / 10;             
    }

    printf("Reverse of the digits = %d", sum);
    return 0;
}
