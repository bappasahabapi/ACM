#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    int i;
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    int max_value =array[0];

    for ( i = 0; i<n; i++)
    {
       if(array[i]>0)
            max_value=array[i];
    }
    printf("The maximun value is: %d\n",max_value);
   

    return 0;
}