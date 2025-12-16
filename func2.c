#include <stdio.h>
int reverseNumber(int n) {
    int rev = 0,rem=0;
    while (n> 0) {
        rem = n%10;
		 rev=(rev*10)+rem;
        n=n/10;           
    }
    return rev;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number = %d\n",reverseNumber(n));
    return 0;
}
