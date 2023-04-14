#include <stdio.h>

int main() {
    int marks;
    
    scanf("%d", &marks);
    
    if(marks >= 76 && marks <= 100) {
        printf("A\n");
    } else if(marks >= 51 && marks <= 75) {
        printf("B\n");
    } else if(marks >= 26 && marks <= 50) {
        printf("C\n");
    } else if(marks >= 0 && marks <= 25) {
        printf("D\n");
    } else {
        printf("Invalid marks\n");
    }
    
    return 0;
}