#include <stdio.h>

int seven_present(int n);
int digit_of_sum(int n);
int is_last_digit_prime(int n);

int main()
{
    long long int n;
    scanf("%lld", &n);

    if(seven_present(n) == 1 && digit_of_sum(n) > 10 && is_last_digit_prime(n) == 1)
        printf("%lld is Bappa's Number\n", n);
    else
        printf("%lld Not Bappa's Number\n", n);
    return 0;
}

int seven_present(int n)
{
    while (n > 0)
    {
        if (n % 10 == 7)
            return 1;
         n = n / 10;
    }
    return 0;
}
int digit_of_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}
int is_last_digit_prime(int n)
{
    int lastDigit = n % 10;
    if (lastDigit == 2 || lastDigit == 3 || lastDigit == 5 || lastDigit == 7)
        return 1;
    else
        return 0;
}