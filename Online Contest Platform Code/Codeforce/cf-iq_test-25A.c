#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n", &n);

    int arr[106];
    int i;
    int position;

    int event_counter = 0;
    int odd_counter = 0;

    // taking the n songkhok input
    for (i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            event_counter++;
        else
            odd_counter++;
    }
    // printf("Even= %d , Odd=%d",event_counter,odd_counter);

    if (event_counter == 1)
    {
        // printf the position of even;
        for (i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                position = i;
                break;
            }
        }
    }
    else
    {
        // printf the position of odd;
        for (i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                position = i;
                break;
            }
        }
    }
    printf("%d\n", position);
    return 0;
}
    

