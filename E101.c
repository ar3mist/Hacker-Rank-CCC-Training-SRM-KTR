#include <stdio.h>
#include <stdlib.h>

int main() {
    int* pointer = (int*) malloc(sizeof(int)); // dynamically allocate memory for pointer
    scanf("%d", pointer); // take input and store it in the memory pointed by the pointer
    printf("%d\n", *pointer); // print the value pointed by the pointer
    free(pointer); // free the dynamically allocated memory
    return 0;
}
