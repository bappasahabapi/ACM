// sample input
// 5
// 3 2 5 1 7
// sample output
// 5



#include<stdio.h>
int main()
{
    int n,i,arr[200002];
    scanf("%d\n",&n);

    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    int moves =0;
    for(i=1; i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            moves =moves +(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
       
    }
    printf("%d\n",moves);
    return 0;
}