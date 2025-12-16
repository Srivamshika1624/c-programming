#include <stdio.h>
int reversenumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}
int ispalindrome(int n) {
    if (n == reversenumber(n))
        return 1;  
    else
        return 0;   
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (ispalindrome(n))
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
    }
