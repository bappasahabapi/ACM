#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    int input[n];
    for(i=0; i<n; i+=1)
    {
        scanf("%d",&input[i]);
    }
    
    int largestElement=input[0];

    for(i=1; i<n; i+=1)
    {
        if(input[i]>largestElement)
        {
            largestElement=input[i];
        }
    }

    int arr[largestElement+1];

    for(i=0; i<=largestElement; i+=1)
    {
        arr[i]=0;
    }

    for(i=0; i<n; i+=1)
    {
        arr[input[i]]+=1;
    }

    int cnt=0;
    for(i=largestElement; i>=1; i-=1)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
        if(cnt==3)
        {
            printf("3rd largest element is %d\n",i);
            break;
        }
    }
    return 0;
}