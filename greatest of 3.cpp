#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter a, b and c values:\n");
    scanf("%f%f%f",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("a is greatest.");
    }
    else if((b>a)&&(b>c))
    {
        printf("b is greatest.");
    }
    else printf("c is greatest.");
    return 0;
}
