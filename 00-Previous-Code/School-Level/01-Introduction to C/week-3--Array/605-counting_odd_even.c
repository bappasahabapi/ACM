#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d\n",&n);

    int arr[100];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int even_counter=0;
    int odd_counter=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even_counter++;
        else
            odd_counter++;
    }
    printf("Odd: %d and Even: %d",odd_counter, even_counter);
    return 0;
}
