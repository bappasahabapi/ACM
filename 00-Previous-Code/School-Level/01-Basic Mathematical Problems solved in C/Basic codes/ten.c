#include<stdio.h>
int main()
{
    int number;
    int count =0;
    int i;
    scanf("%d",&number);
    for (i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0 && number !=1)
    {
        printf("Prime");
    }
    else{
        printf("Composite");
    }
    return 0;
}