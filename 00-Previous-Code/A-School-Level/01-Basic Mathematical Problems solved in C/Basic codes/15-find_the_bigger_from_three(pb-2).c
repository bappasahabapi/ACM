/*
Sample Input:    Sample Output:
5 10 4              B is bigger
10 2 5              A is bigger
4 4                 C is bigger
10 10 10            They are equal
*/

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three number: \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && a>c && b>c){
        printf("A and B both are bigger ");
    }
    else if(a==c && a>b && c>b){
        printf("A and C both are bigger ");
    }
    else if(b==c && b>a && c>a){
        printf("B and C both are bigger ");
    }
    else if(a>b && a>c)
    {
        printf("A is bigger");
    }

    else if(b>a && b>c)
    {
        printf("B is bigger");
    }
    else if(c>a && c>b)
    {
        printf("C is bigger");
    }
    else{
        printf("All are equal");
    }
}

