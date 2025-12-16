#include<stdio.h>
#include<string.h>
int main()
{
    char st1[30],st2[30];
    printf("Enter string 1:\n");
    gets(st1);
    printf("enter string 2:\n");
    gets(st2);
    strcat(st1,st2);
    printf("The combined string is\n",st1);
    puts(st1);
    return 0;
}
