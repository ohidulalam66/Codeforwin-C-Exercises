// C program to find maximum and minimum element in array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], i, N, max = arr[0], min = arr[0];

    printf("Enter Array Size: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter %dth elements in the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nInput %d array elements: ", N);
    for (i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    for (i = 0; i < N; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    printf("\n\nMaximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}