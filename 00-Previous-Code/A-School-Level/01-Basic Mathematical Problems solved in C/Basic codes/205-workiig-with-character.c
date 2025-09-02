#include<stdio.h>
int main()
{
    int num1, num2, value;
    char sign;

    printf("Please enter a number: \n");
    scanf("%d",&num1);

    printf("Please enter next number: \n");
    scanf("%d",&num2);

    value=num1+num2;
    sign='A';
    printf("%d %c %d = %d\n", num1, sign,num2,value);

    value=num1+num2;
    sign='+';
    printf("%d %c %d = %d\n", num1, sign,num2,value);




    return 0;

}
