#include<stdio.h>
int compare(int,int);
int main()
{
    int val1, val2, cmp;
    scanf("%d%d", &val1, &val2);
    cmp = compare(val1, val2);
    if (cmp == 1) printf("Value 1 is greater");
    else if (cmp == -1) printf("Value 2 is greater");
    else printf("Both Values are equal");
    return 0;
}
int compare(int a,int b)
{
    if(a>b)return 1;
    if(a<b)return -1;
    return 0;
}