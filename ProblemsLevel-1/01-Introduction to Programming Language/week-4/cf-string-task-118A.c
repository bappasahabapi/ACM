#include<stdio.h>
#include<string.h>
int main()
{
    char str[102];
    int i;
    fgets(str,sizeof(str),stdin);

    for(i=0;i<strlen(str)-1;i++)
    {
        // printf("%c",str[i]);
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        // printf("%c",str[i]);
        if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u'))
        {
            printf(".%c",str[i]);
        }
        
    }
    return 0;
}