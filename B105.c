#include <stdio.h>

int main() {
    int i, N;

    // take input for N
    
    scanf("%d", &N);

    // print all odd numbers less than N using a for loop
    for (i = 1; i < N; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}