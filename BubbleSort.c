/*

Input

Array Before Sorting
2 1 2 3 4 

Output

Array After Sorting
1 2 2 3 4 

*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortBubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    int *arr;
    arr = (int*)malloc(n*sizeof(int));
    printf("Enter Size Of Array\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Array Before Sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Array After Sorting\n");
    sortBubble(arr, n);
    printArray(arr, n);
    return 0;
}
