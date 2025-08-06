#include<stdio.h>

int add_them(int n,int nums[])
{
    int sum =0;
    int i;
    for(i=0;i<n;i++)
        sum =sum +nums[i];
    return sum;
}
int main()
{
    int arr[]={12,45,65,23,6,12,64,123,643,4};
    int sum =add_them(9,arr);
    printf("The sum is: %d\n",sum);

    return 0;
}

