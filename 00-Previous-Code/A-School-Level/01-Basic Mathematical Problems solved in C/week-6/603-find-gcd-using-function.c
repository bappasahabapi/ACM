#include <stdio.h>

int find_gcd(int x, int y)
{
    for(int i=x; i>=1;i--)
    {
        if(x%i==0 && y%i==0)
            return i;
    }
}

int main()
{

    int a, b, ans;
    scanf("%d %d", &a, &b);
    ans = find_gcd(a,b);
    printf("The gcd is %d", ans);
    return 0;
}
