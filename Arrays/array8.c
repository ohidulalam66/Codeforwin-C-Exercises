// Write a C program to delete all duplicate elements from an array.

/*
Input:
Input array elements: 10, 20, 10, 1, 100, 10, 2, 1, 5, 10
Output:
After removing all duplicate elements
Elements of array are: 10, 20, 1, 100, 2, 5
*/
#include <stdio.h>
#define max_size 100

int main()
{
    int numbers[max_size], i, j, k, numberSize;

    printf("Enter size of the Numbers : ");
    scanf("%d", &numberSize);

    printf("Enter elements of the Numbers : ");
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
                for (k = j; k < numberSize - 1; k++)
                {
                    numbers[k] = numbers[k + 1];
                }
                numberSize--;
                j--;
            }
        }
    }

    printf("Numbers elements after deleting duplicates : ");
    for (i = 0; i < numberSize; i++)
    {
        printf("%d\t", numbers[i]);
    }
    return 0;
}