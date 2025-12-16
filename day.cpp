#include<stdio.h>
int main()
{
    int ch;
    printf("Enter a number:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Sunday");
        break;
        case 2:printf("Monday");
        break;
        case 3:printf("Tuesday");
        break;
        case 4:printf("Wednesday");
        break;
        case 5:printf("Thursday");
        break;
        case 6:printf("Friday");
        break;
        case 7:printf("Saturday");
        default:printf("enter a value from 1 to 7");
	}
    return 0;
}
