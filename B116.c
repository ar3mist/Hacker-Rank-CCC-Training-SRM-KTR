#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("vowel");
            break;
        default:
            printf("not vowel");
    }
    return 0;
}