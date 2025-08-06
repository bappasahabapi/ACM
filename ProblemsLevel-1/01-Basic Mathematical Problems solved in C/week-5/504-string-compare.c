#include<stdio.h>
#include<string.h>
int main()
{
    char name1[]="bappasaha";
    char name2[]="Bangladesh";

    printf("%d\n",strlen(name1));
    printf("%d\n",strlen(name2));
    printf("%d\n",strcmp(name1,name2));

    strcat(name1,name2);
    strcpy(name1,name2);
    puts(name1);

    return 0;
}