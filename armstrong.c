#include<stdio.h>
int main()
{
    int n, x, rem, sum = 0;
    printf("Enter n value:\n");
    scanf("%d", &n);
    x=n;
    while(n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if(sum == x)
        printf("It is an Armstrong number.");
    else
        printf("It is not an Armstrong number.");
    return 0;
}
