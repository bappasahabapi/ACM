#include <stdio.h>
int main()
{

    int n = 8, i,j;
    int given_arr[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sorted_arr[n];

    printf("Without sorting : ");
    for (i = 0; i < n; i++)
    {

        printf("%d ", given_arr[i]);
    }
    printf("\n");

    // --------------- Algorithm  logic start here -------------- // 

    int min,min_indx;
    for (j = 0; j < n; j++)
    {
         min = given_arr[0];
         min_indx = 0;

        for (i = 0; i < n; i++)
        {
            if (given_arr[i] < min)
            {
                min = given_arr[i];
                min_indx = i;
            }
        }
        // printf("%d th index-> %d\n",min_indx,min); // ek bar hbe;
        sorted_arr[j] = min;
        given_arr[min_indx] = 5555;

        // printf("After sorting : ");
        // for (i = 0; i < n; i++)
        // {

        //     printf("%d ", given_arr[i]);
        // }
        // printf("\n");
    }
    // --------------- Algorithm  logic end here -------------- // 
         printf("After sorting : ");
        for (i = 0; i < n; i++)
        {

            printf("%d ", sorted_arr[i]);
            // printf("%d ", given_arr[i]);
        }
        printf("\n");
    return 0;
}