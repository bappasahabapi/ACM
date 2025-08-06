#include<stdio.h>
int main()
{
    int number;
    int height;
    int frined_height;
    int width =0;
    
    scanf("%d %d",&number, &height);
    for(int i=1;i<=number;i++ )
    {
        scanf("%d",&frined_height);
        if(frined_height>height)
            width+=2;
        else
            width++;
    }
    printf("%d\n",width);
    
    
    return 0;
}