// n = number of rows
// m = number of cols

#include<stdio.h>
int main()
{

    int n,m,ans;
    scanf("%d%d", &n,&m);
    ans=((n*m)-n);
    printf("%d tight domino possible",ans);
    return 0;
    
}