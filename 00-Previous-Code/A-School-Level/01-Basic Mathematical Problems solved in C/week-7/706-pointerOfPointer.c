#include<stdio.h>
int main()
{
    int a=5 ;
    printf("Value of a is: %d\n",a);
    int* p=&a;
    printf("Address of pointer p : %p\n",p);

    int** q=&p;
    printf("pointer  of pointer q :%p\n",q);

    // Now if we want to change the value of a 
    **q =7;
    printf("Changed value of a is: %d\n",a);
   
    return 0;
}