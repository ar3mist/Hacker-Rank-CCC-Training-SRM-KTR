#include<stdio.h>

int main() {
    char s[100000],a[100000];
    scanf("%s",s);
    int i,k=0,st[100001];
    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E'||                   s[i]=='I' || s[i]=='O' || s[i]=='U')
       {
           st[k]=i;
           a[k]=s[i];
           k++;
       }            
    }
    int end=k-1;
    for(i=0;i<k;i++)
    {
        s[st[i]]=a[end];
        end--;
    }
    printf("%s",s);
    return 0;
}