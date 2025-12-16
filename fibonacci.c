#include<stdio.h>
int main()
{
    int i,n,first,second,third;
    printf("Enter n value:\n");
    scanf("%d",&n);
    first=0;
    second=1;
    printf("%d %d",first,second);
    for(i=1;i<=n-2;i++)
    {
    	third=first+second;
    	printf("%d",third);
    	first=second;
    	second=third;
	}
	return 0;
}
   
