#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    //your code here
    if(isupper(ch))
    {
        printf("%c",tolower(ch));
    }
    else
    {
        printf("%c",toupper(ch));
    }

    return 0;
}