

#include<stdio.h>
int main()
{

    int i,n;
    for(n=1;n<=11;n++)
    {
        for(i=1 ;i<=10;i++)
        {
            printf("%d X %d =%d\n",n,i,n*i);
        }
        printf("\n");
    }

    return 0;
}

