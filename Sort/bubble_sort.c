#include<stdio.h>


void swap (int* arr, int i, int j){
    arr[i] = arr[i]+arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
}

void bubbleSort(int arr[],int size)
{
    for(int i = 0; i < size -1; i++)
    {
        for(int j = 0; j < size-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }
}


int main()
{
    int arr[] = {10,1,4,9,20,3};

    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

        return 0;


}