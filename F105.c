#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    //your code here
    int count=0;
    char str[101];
    char * token;
    gets(str);
    token = strtok(str," ");
    while(token != NULL)
    {
        count++;
        token = strtok(NULL," ");
    }
    printf("%d",count);
    return 0;
}