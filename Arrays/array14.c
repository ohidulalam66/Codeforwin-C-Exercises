// Write a C program to delete all duplicate elements from an array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], N, i, j, k;

    printf("Enter Array Size: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter %dth elements in the array: ", i + 1);
        scanf("%d", &arr[i]);
    };

    printf("\nInput %d array elements: ", N);
    for (i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    };

    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < N - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                N--;
                j--;
            }
        }
    }

    printf("\n\nArray elements after deleting duplicates : ");
    for (i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}