#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    //your code here
    int i;
    char str[100];
    gets(str);
    int len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
          str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            continue;
        printf("%c",str[i]);
    }
    return 0;
}