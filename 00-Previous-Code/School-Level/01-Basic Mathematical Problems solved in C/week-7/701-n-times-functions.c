#include<stdio.h>

void solve(){
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
}

int main()
{
    int testCase, i;
    printf("Enter number of testCase: ");
    scanf("%d",&testCase);
    for(i=0;i<testCase;i++)
    {
        solve();
    }
    return 0;
}