#include<stdio.h>
int main()
{
    int a[6],i,n,sum=0;
    printf("Enter size of subjects\n");
    scanf("%d",&n);
    for(i=0;i<6;i++)
    {
    	printf("enter values of subjects\n");
        scanf("%d",&a[i]);
    }
    printf("the total is\n");
    for(i=0;i<n;i++)
    {
    	sum=sum+a[i];
  	}
  	printf("%d\n",sum);
    return 0;
}
