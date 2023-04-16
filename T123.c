#include <stdio.h>
#include <string.h>

int titleToNumber(char* s) {
    int n = strlen(s);
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result * 26 + s[i] - 'A' + 1;
    }
    return result;
}

int main() {
    char s[10];
    scanf("%s", s);
    int result = titleToNumber(s);
    printf("%d", result);
    return 0;
}
