#include <stdio.h>

int isPrime(int p)
{
    if (p == 1) return 0 ;
    else if (p == 2)
 return 1 ;
    else
        {
            for (int i = 2; i < p / 2; i++)
                if (p % i == 0)
                    return 0;
            return 1;
        }
}

int main()
{

    int a;
    scanf("%d", &a);

    int ans = isPrime(a);
    if (a == 1)
        printf("%d is a prime number\n", a);
    else
        printf("%d is Not prime number\n", a);
    return 0;
}
