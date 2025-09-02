#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d%d", &x,&y);
    if (x>y){
        printf("X is greater than Y ");
    }
    else if (x<y){
        printf("Y is grater than X");
    }
    else{
        printf("Both are equal");
    }
        
}