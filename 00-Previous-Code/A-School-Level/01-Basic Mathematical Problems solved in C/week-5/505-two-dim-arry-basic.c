#include <stdio.h>
#include <string.h>
int main()
{
    int marks[3][7];
    int i, j;

    marks[0][4] = 12;
    marks[1][4] = 12;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
           scanf("%d ", &marks[i][j]);
        // printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            printf("%d ", marks[i][j]);
        printf("\n");
    }

    // for(j=0;j<7;j++)
    //     printf("%d ",marks[0][j]);
    // printf("\n");
    // for(j=0;j<7;j++)
    //     printf("%d ",marks[1][j]);

    return 0;
}