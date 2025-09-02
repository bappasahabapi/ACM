// input: 14     output:possible
// input: 15     output: Not possible
// input: 2     output: Not possible 



#include<stdio.h>
int main()
{
    int weight;
    printf("Please Enter the weight: ");
    scanf("%d", &weight);
    if(weight==2){
        printf("Not possible");
    }
    else if(weight%2==0){
        printf("possible");
    }
    else{
        printf("Not possible");
    }
    return 0;
}