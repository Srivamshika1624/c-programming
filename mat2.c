#include<stdio.h>
int main()
{
	int i,j,a,b,p[10][10];
	printf("enter number of rows and columns\n");
	scanf("%d %d",&a,&b);
	printf("enter array elements\n");
	for(i=0;i<a;i++)
	{
	    for(j=0;j<b;j++)
		{
			scanf("%d", &p[i][j]);
		}
	}
	printf("the entered array is\n");
	for(i=0;i<a;i++)
	{
	    for(j=0;j<b;j++)
		{
			printf("%d  ", p[j][i]);
		}
		printf("\n");
    } 
	return 0;
}
