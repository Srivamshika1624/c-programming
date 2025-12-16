#include<stdio.h>
int main()
{
	char st[30];
	int i,count=0;
	printf("enter string\n");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		count++;
	}
	printf("the length of string is %d\n",count);
	return 0;
}
