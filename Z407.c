#include<stdio.h>
int strcmp(char* s1, char* s2)
{
    int i=0,j=0;
    while(s1[i++]);
    int len1 = i;
    while(s2[j++]);
    int len2 = j;
    if(len1 == len2)
    {
        for(i=0;i<len1;i++)
        {
            if(s1[i] != s2[i])
            {
                return (s1[i]-s2[i]);
                break;
            }
        }
    }
    if(len1 > len2)
    {
        for(i=0;i<len1;i++)
        {
            if(s1[i] != s2[i])
            {
                return (s1[i]-s2[i]);
                break;
            }
        }
    }
    if(len2 > len1)
    {
        for(i=0;i<len2;i++)
        {
            if(s1[i] != s2[i])
            {
                return (s1[i]-s2[i]);
                break;
            }
        }
    }
    return 0;
}
int main()
{
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    printf("%d", strcmp(str1, str2));    
    return 0;
}