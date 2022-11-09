// Write a C program to find second largest element in an array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], i, N, max1 = 0, max2 = 0;

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
        if (max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
    }

    for (i = 0; i < N; i++)
    {
        if (arr[i] < max1 && arr[i] > max2)
            max2 = arr[i];
    }
    printf("\n\nSecond Maximum Element= %d", max2);

    return 0;
}