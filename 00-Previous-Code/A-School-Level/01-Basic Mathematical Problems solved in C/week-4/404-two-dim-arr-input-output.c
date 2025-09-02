#include <stdio.h>
#include <string.h>

int main() {
    int row=4;
    int col=3;
    int i,j;
    for(i=0;i<=row-1;i++)
    {
        printf("%d th row--> ",i);
        for(j=0;j<=col-1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
  

  return 0;
}