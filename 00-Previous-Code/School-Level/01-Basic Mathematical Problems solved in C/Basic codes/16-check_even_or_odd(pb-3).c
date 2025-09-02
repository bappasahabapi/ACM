/*Sample Input:   Sample Output:
5                   Odd
8                   Even
*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }



    return 0;

}

