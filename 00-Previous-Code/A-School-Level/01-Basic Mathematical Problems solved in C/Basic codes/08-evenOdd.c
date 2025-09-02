#include<stdio.h>
int main()
{
    int x;
    printf("Please enter a random number: \n");
    scanf("%d",&x);

    if (x%2==0){
        printf("Input is even ");
    }
    else{
        printf("Input is odd");
    }

    return 0;
}
