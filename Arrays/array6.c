// Write a C program to count total number of even and odd elements in an array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], i, N, evenCount = 0, oddCount = 0;

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
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\n\nEven elements = %d\n", evenCount);
    printf("Odd elements = %d", oddCount);

    return 0;
}