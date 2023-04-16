#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char* newstr(char* str)
{
    char *res; //use malloc to declare this character array
    res = (char *)malloc(sizeof(char)*50);
    int i, n = strlen(str);
    for (i = 0; i < n; i++)
    {
        if (islower(str[i])) res[i] = toupper(str[i]);
        else res[i] = tolower(str[i]);
    }
    res[n] = '\0';
    return res;
}    
int main()
{
  char str[50];
  gets(str);
  char* new_str = newstr(str);
  puts(new_str);
  return 0;
}