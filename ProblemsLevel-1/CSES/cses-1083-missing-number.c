#include<stdio.h>
int main()
{
    int n,i,x;
    int arr[200001];
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        //printf("%d\n",arr[i]);
        scanf("%d",&x);
        arr[x]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]!=1)
           // printf("%d th position -> %d\n",i,arr[i]);
           printf("%d is missing",i);
    }


    return 0;
}
