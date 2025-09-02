#include <stdio.h>

int main()
{
   int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);


    if((a < b) && (b < c) && (c < d))
    {
        printf("\nLargest: %d", d);
        printf("\nSmallest: %d", a);
    }
    else if((d < c) && (c < b) && (b < a))
    {
        printf("\nLargest: %d", a);
        printf("\nSmallest: %d", d);
    }
    
    else if((c < d || c < a) && (a < d || d < a) && (a < b || d < b))
    {
        printf("\nLargest: %d", b);
        printf("\nSmallest: %d", c);
    }
    else if((b < a || b < d) && (a < d || d < a) && (d < c || a < c))
    {
        printf("\nLargest: %d", c);
        printf("\nSmallest: %d", b);
    }


    return 0;
}