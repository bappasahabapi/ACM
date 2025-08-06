// n = number of rows
// m = number of cols

#include<stdio.h>
int main()
{

    int n,m,ans;
    if (n==1 && m==1)
        ans=0;
    else if(n==1 && m>1)
        ans=(m-1);
    else if (n>1 && m==1)
        ans=(n-1);
    else
        ans=(m-1)*n;
    printf("%d",ans);
   
    return 0;
    
}




