#include<stdio.h>
int main()
{
    int n ;
    printf("Enter total choklet number: \n");
    scanf("%d",&n);

    int choklet =n;
    int packet =n;
    while (packet>=4)
    {
        choklet = (choklet+packet/4);
        packet=packet/4 +(packet%4);
    }
    printf("Total received choklet: %d\n",choklet);
    
  
    return 0;

}