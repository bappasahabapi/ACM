#include<stdio.h>
int main()
{
    int first, second ,gcd, lcm;
    scanf("%d %d", &first, &second);


    if(first>second)
    {
       gcd = first%second;
       lcm=(first*second)/gcd;

    }
    else
    {
       gcd = second%first;
       lcm=(first*second)/gcd;
    }
    printf("The LCM of %d and %d is %d\n",first,second, lcm);
   
    return 0;
}