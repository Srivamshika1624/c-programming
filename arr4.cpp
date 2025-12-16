#include<stdio.h>
int main()
{
	float percentage;
    int a[6],i,n,even,odd;
    printf("Enter size of subjects\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("enter values of subjects\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]%2==0) 
		even++;
    	else odd++;
  	}
  	printf("the even numbers=%d odd numbers=%d",even,odd);

    return 0;
}
