#include<stdio.h>
int main()
{
    // 1st
    int n,i;
    scanf("%d",&n);
    // 2nd
    int input_arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&input_arr[i]);
    // 3rd
    int minimum_element =input_arr[0];
    for(i=0;i<n;i++)
    {
        if(input_arr[i]>minimum_element)
            minimum_element=input_arr[i];
    }
    // 4th 
    int new_arr[minimum_element+1];
    // 5th
    for(i=0;i<=minimum_element;i++)
    {
        new_arr[i]=0;
    }
    // 6th
    for(i=0;i<n;i++)
    {
        new_arr[input_arr[i]]=new_arr[input_arr[i]]+1;
    }
    // 7th[here is the difference]
    int counter =0;
    for(i=1;i<=minimum_element;i++)
    {
        if(new_arr[i]==1)
            counter++;
        if(counter==2){
            printf("The 2nd minimum: %d\n",i);
            break;
        }
            
    }
    return 0;
}