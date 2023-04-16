#include<stdio.h>

int strlen(char* s)
{
    int count = 0;
    while(*s != '\0')
    {
        s += 1;
        count++;
    }
    return count;
}
int main()
{
    char str[50];
    gets(str);
    printf("%d", strlen(str));
    return 0;
}