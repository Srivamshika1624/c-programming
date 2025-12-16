#include<stdio.h>
#include<string.h>
int main()
{
    char st[30];
    int length;
    printf("Enter string:\n");
    gets(st);
    length=strlen(st);
    printf("The length of the given string=%d\n",length);
    return 0;
}
