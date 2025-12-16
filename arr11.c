#include<stdio.h>
int main()
{
    int a[6],i;
    printf("Enter marks of subjects:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered marks:\n");
    for(i=0;i<6;i++)
    {
    	printf("%d\n",a[i]);
  	}
    return 0;
}
