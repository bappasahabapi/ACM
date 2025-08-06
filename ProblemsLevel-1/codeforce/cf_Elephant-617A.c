#include<stdio.h>
int main()
{
    int distance;
    int steps;
    scanf("%d",&distance);
    steps=(distance/5) + (distance%5!=0);
        // if(distance%5==0)
        // {
        //     steps=distance/5;
        // }
        // else
        // {
        //     steps=(distance/5)+1;
        // }
        printf("%d\n",steps);
    
    return 0;
}