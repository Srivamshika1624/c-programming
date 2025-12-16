#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter side values:\n");
    scanf("%f%f%f",&a,&b,&c);
    if((a==b)&&(b==c)&&(c==a))
    {
        printf("Triangle is equilateral.");
    }
    else if((a==b)||(b==c)||(c==a))
    {
        printf("Traingle is isosceles.");
    }
    else printf("Triangle is scalene.");
    return 0;
}
