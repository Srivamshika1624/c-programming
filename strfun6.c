#include<stdio.h>
#include<string.h>
int main()
{
    char st1[30],st2[30];
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    if(strcmp(st1, st2) == 0)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }
    return 0;
}
