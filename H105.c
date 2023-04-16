#include<stdio.h>
void swap(int*, int*);
int main()
{
    int v1, v2;
    scanf("%d%d", &v1, &v2);
    swap(&v1, &v2);
    printf("%d %d", v1, v2);
    return 0;
}
//implement the function swap here
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}