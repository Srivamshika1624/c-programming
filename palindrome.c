#include<stdio.h>
int main()
{
    int n,x,rev=0,rem;
    printf("Enter n value:\n");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(rev==x)
    {
        printf("It is a palindrome.");
    }
    else printf("It is not a palindrome.");
    return 0;
}
