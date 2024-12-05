#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(int *arr, int length)
{
    if (length != 0)
    {
        for (int i = 0; i < length; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
void merge(int *arr1, int m, int *arr2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    int *arr = (int *)malloc(sizeof(int) * (m + n));

    memcpy(arr, arr1, sizeof(int) * m);
    memcpy(arr+m, arr2, sizeof(int) * n);
    printf("Arr 3: ");
    printArray(arr, (sizeof(int) * (m + n) / sizeof(int)));
}
int main()
{

    int arr1[4] = {1, 2, 3, 4};
    int arr2[5] = {2, 3, 4, 5, 6};

    printf("Arr1 : ");
    printArray(arr1, 4);
    printf("Arr2 : ");
    printArray(arr2, 5);
    merge(arr1, 4, arr2, 5);

    return 0;
}