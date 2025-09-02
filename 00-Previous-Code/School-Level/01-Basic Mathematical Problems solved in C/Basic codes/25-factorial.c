#include<stdio.h>
int main()
{

    int factorial = 1;
    for ( int i = 1; i <= 5; i++)
     {
        factorial = factorial * i;
     }   
    printf("%d\n",factorial);
    return 0;
}

