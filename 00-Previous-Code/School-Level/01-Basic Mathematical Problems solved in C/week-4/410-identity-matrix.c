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
    if(row==col)
    {
        // int x=a[0][0];
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                {
                    //special checking
                    if(a[i][j]!=1)
                    {
                        ans=0;
                    }
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
            printf("Identity Matrix\n");
        }
        else
        {
            printf("Not Identical\n");
        }
    }

    else
    {
        printf("Not Identical\n");
    }

    return 0;
}