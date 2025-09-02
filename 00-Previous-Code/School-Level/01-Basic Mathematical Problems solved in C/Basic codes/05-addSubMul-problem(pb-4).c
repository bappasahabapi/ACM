#include<stdio.h>
int main()
{
   int a,b;
   printf("Please enter two number\n ");
   scanf("%d%d", &a,&b);

    int sum, sub, mul;
    sum =a+b;
    sub= a-b;
    mul=a*b;

    printf("%d %d %d",sum, sub, mul);


    return 0;

}

