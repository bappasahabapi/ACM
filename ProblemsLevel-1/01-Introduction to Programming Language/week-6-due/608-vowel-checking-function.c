#include<stdio.h>
#include<string.h>

int is_vowel(char x)
{
    if(is_vowel=='a' || is_vowel=='e' || is_vowel=='i' || is_vowel=='o' || is_vowel=='u')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    scanf("%c",ch);
    ch=getChar();
    // getchar(); // this is for enter button

    if(is_vowel(ch)==1)
        printf("The character is vowel\n");
    else
        printf("Not vowel\n");

    return 0;
}
