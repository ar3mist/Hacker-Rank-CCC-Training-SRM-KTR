#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}