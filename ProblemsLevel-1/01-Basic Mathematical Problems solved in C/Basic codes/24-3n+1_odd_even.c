#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number: \n");
    scanf("%d",&n);
    while (n>1)
    {
        printf("%d ",n);
        if(n%2==0)
        {
            n = n/2;
        }
        else{
            n=3*n +1;
        }
        printf("%d ",n);
    }
    

    return 0;
}