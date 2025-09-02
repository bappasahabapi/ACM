#include<stdio.h>
int main()
{
    // int a[5];
    int n; // n=5;
    scanf("%d\n",&n);
    int a[n]; // 5 size array
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}