#include <stdio.h>
#include <string.h>

// Function to reverse a number
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// Function to check if a number is palindrome
int is_palindrome(int n) {
    int rev = reverse(n);
    return (rev == n);
}

int main() {
    int iterations = 0;
    int number;
    scanf("%d", &number);
    while (iterations < 5) {
        number = number + reverse(number);
        if (is_palindrome(number)) {
            printf("%d\n", number);
            printf("YES\n");
            return 0;
        }
        iterations++;
    }
    printf("NO\n");
    return 0;
}
