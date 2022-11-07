// Write a C program to print all negative elements in an array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], i, N;

    printf("Enter Array Size: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter %dth elements in the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nNegative numbers in the array: ");
    for (i = 0; i < N; i++)
        if (arr[i] < 0)
            printf("%d\t", arr[i]);
    return 0;
}