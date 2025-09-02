#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d\n",&n);
    int a,b,c;
    int solved=0;
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a+b+c>=2)
        {
           solved++;
        }
        printf("%d\n",solved);
    }
}
