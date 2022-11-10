// Write a C program to copy all elements from an array to another array.
#include <stdio.h>
#define max_size 100

int main()
{
    int arr1[max_size], arr2[max_size], i, N, negativeCount = 0;

    printf("Enter Array Size: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter %dth elements in the array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < N; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nInput %d array no1. elements: ", N);
    for (i = 0; i < N; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\nInput %d array no2. elements: ", N);
    for (i = 0; i < N; i++)
    {
        printf("%d\t", arr2[i]);
    }

    return 0;
}