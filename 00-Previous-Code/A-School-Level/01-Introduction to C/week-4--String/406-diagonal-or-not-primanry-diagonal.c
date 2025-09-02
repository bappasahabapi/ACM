#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);

    int a[row][col];
    int i,j;
    int ans=1;  // asume the ans is =1 menas diagonal
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // check squre or not
    if(row==col)
    {

        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(a[i][j]!=0)
                {
                    // printf("Not diagonal");
                    ans=0;
                }

            }
        }

        if(ans==1)
        {
            printf("Diagonal\n");
        }
        else
        {
            printf("Not diagonal\n");
        }
    }

    else
    {
        printf("Not diagonal\n");
    }

    return 0;
}