#include <stdio.h>

int main ()
{
    int a,b,c,d;
  
     printf("enter the numbers: ");
     scanf("%d %d %d %d", &a, &b, &c, &d);

    int min, max, max1, max2, min1, min2;

if (a > b) // 1
{
    max1 = a;
    min1 = b;
}
else
{
    max1 = b;
    min1 = a;
}

if (c > d) // 2
{
    max2 = c;
    min2 = d;
}
else
{
    max2 = d;
    min2 = c;
}

if (max1 > max2) // 3
    max = max1;
else
    max = max2;

if (min1 < min2) // 4
    min = min1;
else
    min = min2;

     printf("%d\n", max);
     printf("%d\n", min);
     return 0;
}