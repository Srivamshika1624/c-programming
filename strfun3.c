#include<stdio.h>
#include<string.h>
int main()
{
    char st1[30],st2[30];
    int length=0,i,j;
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    for(i=0;st2[i]!='\0';i++)
    {
        length++;
        st1==strcpy(st2,st1);
    }
    printf("The copied string is\n");
    puts(st2);
    return 0;
}
