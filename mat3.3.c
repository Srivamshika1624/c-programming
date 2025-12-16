#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10];
	int i,j,R1,R2,C1,C2;
	printf("enter sizes of 1st matrix\n");
	scanf("%d %d",&R1,&C1);
	printf("enter size of 2nd matrix\n");
	scanf("%d %d",&R2,&C2);
	if((R1==R2)&&(C1==C2))
	{
		printf("enter %d elements of 1st matrix\n",R1*C1);
	}
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter %d elements of 2nd matrix\n");
	for(i=0;i<R2;i++)
	{
		for(j=0;j<C2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the resultant matrix\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
			printf("%3d",sum[i][j]);
		}
	}
	else printf("no");
	return 0;
    }
}

