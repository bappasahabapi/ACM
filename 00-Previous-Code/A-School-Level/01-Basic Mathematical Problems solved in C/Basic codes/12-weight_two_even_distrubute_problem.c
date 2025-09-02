// input: 10     output: 5,5 not
// input: 11     output: Not 
// input: 12     output:  6,6possible 
// input: 13     output:  not  
// input: 14     output:  7,7,not 
// input: 15     output:  not
// input: 16     output:  8,8 possible 



#include<stdio.h>
int main()
{
    int weight;
    printf("Please Enter the weight: ");
    scanf("%d", &weight);
    // if(weight==2){
    //     printf("Not possible");
    // }
    if(weight%4==0){
        printf("possible");
    }
    else{
        printf("Not possible");
    }
    return 0;
}