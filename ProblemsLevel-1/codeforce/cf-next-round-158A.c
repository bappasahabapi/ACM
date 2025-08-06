#include<stdio.h>
int main()
{
    int n,k, i;
    scanf("%d %d",&n,&k);

    int arr[55];
    for ( i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int ans =0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]>=arr[k] && arr[i]>0)
            ans++;
    }
    printf("%d\n",ans);
    
    return 0;
}