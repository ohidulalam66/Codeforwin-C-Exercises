// Write a C program to count total number of duplicate elements in an array.

/*
Input:
Input array elements: 1, 90, 40, 1, 25, 1, 90, 40, 25, 1, 7
Output:
Total number of duplicate elements = 4
 */

#include <stdio.h>
#define max_size 100

int main()
{
    int numbers[max_size], i, j, numberSize, numberCount = 0;

    printf("Enter size of the Numbers :");
    scanf("%d", &numberSize);

    printf("Enter elements of the Numbers :");
    for (i = 0; i < numberSize; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < numberSize; i++)
    {
        for (j = i + 1; j < numberSize; j++)
        {
            if (numbers[i] == numbers[j])
            {
                numberCount++;
            }
        }
    }
    printf("Total number of duplicate elements found in array = %d", numberCount);

    return 0;
}