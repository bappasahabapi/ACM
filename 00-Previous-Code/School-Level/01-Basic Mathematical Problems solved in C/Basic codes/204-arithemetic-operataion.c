
#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    printf("Summation is: %d+%d =%d\n",num1, num2, num1+num2);
    printf("Subrtaction is: %d-%d =%d\n",num1, num2, num1-num2);
    printf("%d*%d =%d\n",num1, num2, num1*num2);
    printf("%d/%d =%d",num1, num2, num1/num2);



    return 0;

}
