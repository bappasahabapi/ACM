#include<stdio.h>
int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d",&input);

    int a, b, result;
    scanf("%d%d", &a,&b);

    if(input%2==0){
        result = a+b;
        printf("As input is even %d is sum:",result);
    }
    else{
        result = a-b;
        printf("%d",result);
    }

    return 0;
}