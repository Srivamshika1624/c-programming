#include <stdio.h>
int armstrong(int n) 
{
	int a;
    int original = n;
    int sum = 0;
    while (n>0) 
	{
        a = n % 10;
        sum=sum+(a*a*a); 
        n /= 10;
    }
    return (sum == original); 
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (armstrong(n))
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}
