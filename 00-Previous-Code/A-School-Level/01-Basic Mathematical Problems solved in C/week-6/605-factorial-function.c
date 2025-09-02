#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int result=factorial(n);
    printf("Factorial of %d is: %d\n", n, result);
    return 0;
}






/* 
int n, i;
scanf("%d", &n);
int fact = 1;

for (i = 1; i <= n; i++)
    fact *= i;
printf("Factorial of %d is: %d\n", n, fact); 

*/