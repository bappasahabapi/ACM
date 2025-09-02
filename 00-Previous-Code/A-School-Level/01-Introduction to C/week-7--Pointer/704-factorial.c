#include<stdio.h>
#include<math.h>

int factorial(int n){
    if(n>0)
        return n*factorial(n-1);
    else
        return 1;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    return 0;
}