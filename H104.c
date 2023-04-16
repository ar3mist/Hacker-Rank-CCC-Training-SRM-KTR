#include<stdio.h>
void power(int*, int);
int main()
{
    int res, val;
    scanf("%d", &val);
    power(&res, val);
    printf("%d", res);
    return 0;
}
//implement the power function here
void power(int *a, int b)
{
    int sum=1;
    while(b--)
    {
        sum *= 2;
    }
    *a = sum;
}