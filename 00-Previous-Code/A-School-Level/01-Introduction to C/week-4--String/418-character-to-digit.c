#include<stdio.h>
int main()
{
    char str[]="abcdefghijklmnopqrstuvwxyz";
    int i;

    for(i=0; str[i] !='\0'; i++){
        int alphabetRollNumber =(str[i]-'a')+1;
        printf("%c -> %d\n",str[i],alphabetRollNumber);

    }
    return 0;
}