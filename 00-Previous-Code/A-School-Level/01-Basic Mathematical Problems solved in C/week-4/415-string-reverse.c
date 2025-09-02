#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);

    int len=0,i=0;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    i=0;

    for(i=len-1; i>=0; i--)
    {
        printf("%c ",s[i]);
    }
    return 0;
}

