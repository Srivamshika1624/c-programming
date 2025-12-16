#include<stdio.h>
#include<string.h>
int main()
{
    char st[30];
    printf("Enter string:\n");
    gets(st);
    printf("Given string in lower case is %s",strlwr(st));
    return 0;
}
