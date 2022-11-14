// Write a C program to count frequency of each element in an array.

#include <stdio.h>
#define max_size 100

int main()
{
    int arr[max_size], frequency[max_size], N, i, j, count;

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
        frequency[i] = -1;
    }

    for (i = 0; i < N; i++)
    {
        count = 1;
        for (j = i + 1; j < N; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0)
            frequency[i] = count;
    }

    printf("\n\nFrequency of all elements of array : \n");
    for (i = 0; i < N; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%d elements %d times\n", arr[i], frequency[i]);
        }
    }

    return 0;
}