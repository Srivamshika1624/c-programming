#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter in the alphabet:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Letter is a vowel.");
    }
    else printf("Letter is a consonant.");
    return 0;
}
