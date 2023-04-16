#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, *arr, sum = 0;

    printf("");
    scanf("%d", &N);

    // allocate memory for the array
    arr = (int*) malloc(sizeof(int) * N);

    // input elements of the array
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // calculate the sum of the elements
    for (i = 0; i < N; i++) {
        sum += arr[i];
    }

    printf("%d\n", sum);

    // free the memory allocated for the array
    free(arr);

    return 0;
}
