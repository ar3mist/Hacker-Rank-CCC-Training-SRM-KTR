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
    int n;
    scanf("%d", &n);

    for (int i = n + 1;; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}