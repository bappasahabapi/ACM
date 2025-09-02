
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d",&number);
    if(number>0)
    {
        printf("Positive");
    }
    else if(number<0)
    {
        printf("Negative");
    }
    else{
        printf("The number is zero");
    }



    return 0;

}
