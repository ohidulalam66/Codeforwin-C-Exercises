// Write a C program to find sum of all array elements.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], i, N, sum = 0;

    printf("Enter Array Size: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter %dth elements in the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    printf("Sum of all elements = %d", sum);

    return 0;
}