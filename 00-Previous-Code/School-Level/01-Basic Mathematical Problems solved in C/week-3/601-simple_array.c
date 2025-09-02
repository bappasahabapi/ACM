#include<stdio.h>
int main()
{
    int arr[10];
    arr[0]=1000;
    arr[1]=456;
    arr[2]=arr[0]-arr[1];

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);

    return 0;
}