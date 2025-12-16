#include<stdio.h>
int main()
{
    int a[6],i,n;
    printf("Enter size of numbers\n");
    scanf("%d",&n);
    for(i=0;i<6;i++)
    {
    	printf("enter numbers\n");
        scanf("%d",&a[i]);
    }
    printf("reverse order\n");
    for(i=n-1;i>=0;i--)
    {
    	printf("%d\n",a[i]);
  	}
    return 0;
}
