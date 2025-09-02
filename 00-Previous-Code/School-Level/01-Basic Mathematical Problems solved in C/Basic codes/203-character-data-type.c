#include<stdio.h>
int main()
{
    char ch;
    char letter;
    printf("enter the first letter of your name: ");
    printf("Enter the letter: ");

    scanf("%c",&ch);
    letter=getchar();

    printf("The first letter is: %c\n",ch);
    printf("The letter is: %c\n", letter);



    return 0;

}
