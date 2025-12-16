#include<stdio.h>
int main()
{
	int i,j,count=0,n;
	printf("entrer n value\n");
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		for(i=1;i<=j;i++)
		{
			if(j%i==0)
			{
				count++;
			}
		}
	}
	if(count==2)
	{
		printf("%d",j);
	}
    printf("%d",j);
	return 0;
	
}
