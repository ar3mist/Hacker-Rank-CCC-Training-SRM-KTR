#include <stdio.h>

int main() {
    int num;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}