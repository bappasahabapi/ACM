#include<stdio.h>
#include<string.h>
int main()
{
    char str1[102];
    char str2[102];
    int i;
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    int length =strlen(str1)-1;

    //making lowercase everything
    for(i=0;i<length;i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i] +=32;
        if(str2[i]>='A' && str2[i]<='Z')
            str2[i] +=32;
    }
    // business logic
    for(i=0;i<length;i++)
    {
        if(str1[i]<str2[i])
        {
            printf("-1\n");
           return 0;
        }
        else if(str1[i]>str2[i])
        {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}