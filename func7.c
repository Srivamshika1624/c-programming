#include<stdio.h>
int min(int a[10],int n)
{
    int	i,minimum;
    minimum=a[0];
    for (i=1;i<n;i++)
    {
    	if (a[i]<minimum)
    	minimum=a[i];
	}
	return minimum;
}
int main()
{
    int i,n,a[50];
	printf("Enter number of values in array:\n");
	scanf("%d",&n);
	printf("Enter any value:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("min number is %d",min(a,n));
	return 0;
}
