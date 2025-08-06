#include<stdio.h>
int my_friend(int x, int y)
{
    printf("Addition of two numbers:\n");
    return x+y;
    // return 2*x;
}
int main()
{
   int a= my_friend(1,3);
   printf("%d\n ",a);
   int b= my_friend(45,5);
   printf("%d\n ",b);
    return 0;
}