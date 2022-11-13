// Write a C program to insert an element in array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], i, N, num, pos;

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

    printf("\n\nEnter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    if (pos <= N)
    {
        for (i = N; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = num;
        N++;

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