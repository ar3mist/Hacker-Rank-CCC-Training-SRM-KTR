#include <stdio.h>

int sum;

void func(int x, int y) {
    sum = x + y;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    func(a, b);
    printf("%d\n", sum);
    return 0;
}