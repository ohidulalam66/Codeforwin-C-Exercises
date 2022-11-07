// Write a C program to read and print elements of array.

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

    printf("\nElements in array are: ");
    for (i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}