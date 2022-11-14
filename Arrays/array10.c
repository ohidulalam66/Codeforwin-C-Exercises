// Write a C program to delete an element from an array at specified position.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], i, N, pos;

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

    printf("\n\nEnter the element position : ");
    scanf("%d", &pos);

    if (pos <= N)
    {
        for (i = pos - 1; i <= N - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        N--;

        printf("\nArray %d elements after insertion : ", N);
        for (i = 0; i < N; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    else
        printf("Invalid position! Please enter position between 1 to %d", N);

    return 0;
}