/*
nPr =n!/(n-r)!
nCr =n!/((n-r)!* r!)
 */


#include<stdio.h>
int factorial_of(int n);
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int permutation =factorial_of(n)/factorial_of(n-r);
    int combination =factorial_of(n)/(factorial_of(n-r)* factorial_of(r));
    printf("Permutaion is nPr: %d\n",permutation);
    printf("Combination is nCr: %d\n",combination);
    return 0;
}

int factorial_of(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
        fact*=i;
    return fact;

}