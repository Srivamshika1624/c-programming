#include<stdio.h>
#include<string.h>
int main()
{
    char st1[30];
    printf("Enter string:\n");
    gets(st1);
    strrev(st1);
    printf("The reversed string is\n",st1);
    puts(st1);
    return 0;
}
