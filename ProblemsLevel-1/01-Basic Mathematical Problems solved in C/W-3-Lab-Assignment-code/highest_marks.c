#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

   int max;
    for ( i = 0; i<n; i++)
    {
       if(arr[0]<arr[i])
       {
            arr[0]=arr[i];
            max=arr[0];
            
            
            
       }
    }
    
    int ans;
    for ( i = 0; i<n; i++)
    {
        if(max>=arr[i])
        {
            ans= max-arr[i]; 
            printf("%d ",ans);
        }
    }

    return 0;
}