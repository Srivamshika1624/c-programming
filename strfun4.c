#include<stdio.h>
int main()
{
    int i=0,j=0;
    char st1[30],st2[30];
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    while(st1[i]!='\0'||st2[i]!='\0')
    {
        if(st1[i]!=st2[i])
        {
            j=1;
            break;
        }
        i++;
    }
    if(j==0)
    {
        printf("Both strings are equal\n");
    }
    else printf("Both strings are not equal\n");
    return 0;
}
