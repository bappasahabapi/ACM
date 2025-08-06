
/*Sample Input:   Sample Output:
Formed triangle or not

2 4 2               NO
6 3 2               YES
0 2 10              NO
4 2 8               YES
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number: \n");
    scanf("%d %d %d",&a, &b, &c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }



    return 0;

}

