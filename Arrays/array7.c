// Write a C program to count total number of negative elements in an array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], i, N, negativeCount = 0;

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
        if (arr[i] < 0)
            negativeCount++;
    }

    printf("\nTotal number of negative elements: %d", negativeCount);

    return 0;
}