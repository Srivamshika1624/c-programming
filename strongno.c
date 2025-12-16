#include<stdio.h>
int main()
{
    int x,n,sum=0,fact=1,i,rem;
    printf("Enter n value:\n");
    scanf("%d",&n);
    fact=i;
    x=n;
    while(n>0)
    {
        rem=n%10;
        {
            for(fact=1,i=1;i<=rem;i++)
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==x)
    {
        printf("It is a strong number.");
    }
    else printf("It is not a strong number.");
    return 0;
}
