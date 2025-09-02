/*
Sample Input:    Sample Output:
5 10            B is bigger
10 2            A is bigger
4 4             They are equal
*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two number: \n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("A is bigger");
    }
    else if(b>a)
    {
        printf("B is bigger");
    }
    else{
        printf("They are equal");
    }
}
