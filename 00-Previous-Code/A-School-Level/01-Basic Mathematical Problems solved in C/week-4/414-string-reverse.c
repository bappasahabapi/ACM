#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Bangladesh";

    int len =strlen(s1);
    int i=0;
    int j;
    for(i=len-1;i>=0;i--)
        printf("%c ", s1[i]);
    return 0;
}