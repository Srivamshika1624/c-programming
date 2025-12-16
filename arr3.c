#include<stdio.h>
int main()
{
	float percentage;
    int a[6],i,n,sum,avg;
    printf("Enter size of subjects\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("enter values of subjects\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	sum=sum+a[i];
  	}
  	percentage=(float)sum/n;
  	printf("percentage=%f",percentage);

    return 0;
}
