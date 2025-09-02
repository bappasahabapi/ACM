#include<stdio.h>
int main()
{
    int first, second ,gcd, lcm;
    scanf("%d %d", &first, &second);


    if(first>second)
    {
       gcd = first%second;

    }
    else
    {
       gcd = second%first;
    }
    printf("The GCD of %d and %d is %d\n",first,second, gcd);
   
    return 0;
}