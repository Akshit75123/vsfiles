#include <stdio.h>

int swapNum(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

void bubblesortArray(int arr[], int n)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 6 - i; j++)
        {
            if (arr[i] > arr[j])
                swapNum(arr[i], arr[j]);
        }
    }
}

void getArray(int arr[], int n){
    for (int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

int main()
{

    int arr[6] = {12, 4, 1, 5, 3, 2};
    // int temp = 0;

    printf("The Given Array is");
    getArray(arr, 6);

    bubblesortArray(arr, 6);

    printf("The Sorted Array is");
    getArray(arr, 6);
    return 0;
}