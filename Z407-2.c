#include<stdio.h>
void strcpy(char* s1, char* s2)
{
    while(*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}
int main()
{
    char str1[50], str2[50];
    gets(str1);
    strcpy(str2, str1);
    puts(str1);
    puts(str2);    
    return 0;
}