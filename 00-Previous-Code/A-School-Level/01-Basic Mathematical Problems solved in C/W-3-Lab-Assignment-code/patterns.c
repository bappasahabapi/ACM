#include<stdio.h>
int main()
{
    int n, row , col;
    scanf("%d\n",&n);

    for(row=1;row<=n;row++)
    {
        for(col=row;col>0;col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}