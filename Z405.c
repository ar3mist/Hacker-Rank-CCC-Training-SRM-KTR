#include<stdio.h>
void strcat(char* s1, char* s2)
{
    int i=0,j=0;
    while(s1[i++]);
    int len1 = i;
    while(s2[j++]);
    int len2 = j;
    j=0;
    for(int i=len1-1;i<len2+len1;i++)
    {
        s1[i] = s2[j];
        j++;
    }
}
int main()
{
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    strcat(str1, str2);
    puts(str1);
    return 0;
}