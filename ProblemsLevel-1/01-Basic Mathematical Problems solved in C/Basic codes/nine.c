#include<stdio.h>
int main()
{
    int number;
    int count;
    scanf("%d",&number);
    printf("The factors of %d are: ",number);
    for (count=1;count<=number;count++)
    {
        if(number%count==0)
        {
            
            if(count==number)
            {
                printf("%d.\n",count);
                break;
            }
            printf("%d, ",count);
        }
    }
    return 0;
}