// Write a C program to count total number of duplicate elements in an array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], N, i, j, count = 0;

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
                count++;
                break;
            };
        };
    };

    printf("\n\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}