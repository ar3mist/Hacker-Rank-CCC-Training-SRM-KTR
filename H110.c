#include <stdio.h>

int x, y, z; // Global variables

void input() {
    scanf("%d %d", &x, &y);
}

void compute() {
    z = x + y;
}

void print() {
    printf("%d\n", z);
}

int main() {
    input();
    compute();
    print();
    return 0;
}
