#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number of passenger: \n");
    scanf("%d",&n);
    int i;
    int sum=0;
    int weight;
    for (i=1 ; i<=n;i++)
    {
        scanf("%d",&weight);
        sum=sum+weight;
    }
    
    printf("%d",sum);
    return 0;

}