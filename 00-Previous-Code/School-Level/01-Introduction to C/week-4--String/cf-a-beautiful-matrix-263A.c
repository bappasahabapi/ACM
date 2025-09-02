#include <stdio.h>
int main()
{

    int arr[5][5];
    int i,j;
    int remember_index_x, remember_index_y;


    printf("taking 2D input ");
    for (i = 0; i < 5; i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);

            if(arr[i][j]==1)
            {
                remember_index_x=i;
                remember_index_y=j;
            }
        }
    }
    // --------------- Algorithm logic  start here -------------- //
    int ans =0;
    if(remember_index_x>2)
        ans+=(remember_index_x-2);
    else
        ans+=(2-remember_index_x);
    if(remember_index_y>2)
        ans+=(remember_index_y-2);
    else
        ans+=(2-remember_index_y);
    printf("%d\n",ans);    

    // --------------- Algorithm  logic end  here -------------- //
       
    return 0;
}