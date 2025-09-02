#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    int sum;
    int a,b,c;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&sum,&a,&b,&c);
    }
    int ans;
    for(i=1;i<=n;i++)
    {
        if(sum<=0 || a>sum | b>sum |c>sum)
            break;
        else if(sum>a && sum>b &&sum>c && sum>(a+b+c))
        {
            ans=sum-(a+b+c);
            printf("%d\n",ans);
        }
            
    }
    return 0;
}
