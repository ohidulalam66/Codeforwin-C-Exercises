// Write a C program to count total number of negative elements in an array.
/* Input:
Input array elements : 5, -45, 10, -100, 4, 89, 21, -97, -23, 45
Output:
Total number of negative elements: 4 */

#include <stdio.h>
#define max_size 100

int main()
{
    int number[max_size], i, numberSize, numCount = 0;

    printf("Enter size of the Numbers : ");
    scanf("%d", &numberSize);

    printf("Enter elements of the Number : ");
    for (i = 0; i < numberSize; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < numberSize; i++)
    {
        if (number[i] < 0)
        {
            numCount++;
        }
    }
    if (numCount)
        printf("Total negative elements in Numbers = %d", numCount);
    else
        printf("There is a no Negative Number");

    return 0;
}