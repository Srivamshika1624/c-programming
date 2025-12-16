#include<stdio.h>
int max(int a[10],int n)
{
    int	i,maximum;
    maximum=a[0];
    for (i=1;i<n;i++)
    {
    	if (a[i]>maximum)
    	maximum=a[i];
	}
	return maximum;
}
int main()
{
    int i,n,a[50];
	printf("Enter number of values in array:\n");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("max number is %d",max(a,n));
	return 0;
}
