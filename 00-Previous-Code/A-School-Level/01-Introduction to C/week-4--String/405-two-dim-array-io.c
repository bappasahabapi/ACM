#include <stdio.h>
#include <string.h>

int main() {
    int row=4;
    int col=3;
    int a[row][col];
    int i,j;

        // For taking input 2DA 
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    // For showing output of 2DA 
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
  

  return 0;
}