#include<stdio.h>
#include<string.h>
int main()
{
    char st[30];
    char *ptr;
    char ch;
    printf("Enter string:\n");
    gets(st);
    printf("Enter character to search:\n");
    scanf("%c",&ch);
    ptr=strchr(st,ch);
    if(ptr!=NULL)
    {
        printf("Character found at position %d\n",(ptr-st)+1);
    }
    else printf("Character not found",ch);
    return 0;
}
