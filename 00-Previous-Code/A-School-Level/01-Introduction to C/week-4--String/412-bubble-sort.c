#include <stdio.h>
int main()
{

    int n = 11, i, j;
    int given_arr[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62,19, 4};
    // int sorted_arr[n];

    printf("Without sorting : ");
    for (i = 0; i < n; i++)
    {

        printf("%d ", given_arr[i]);
    }
    printf("\n");

    // --------------- Algorithm logic  start here -------------- //
    for (j = 0; j < n - 1; j++)
    {
        int temp;
        for (i = 0; i < n - 1; i++)
        {
            if (given_arr[i] > given_arr[i + 1])
            {
                temp = given_arr[i];
                given_arr[i] = given_arr[i + 1];
                given_arr[i + 1] = temp;
            }
        }

        // --------------- Algorithm  logic end  here -------------- //
        printf("After sorting %d: ",j);
        for (i = 0; i < n; i++)
        {
            printf("%d ", given_arr[i]);
        }
        printf("\n");
    }
    return 0;
}