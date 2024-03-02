#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid =  (start + end)/2;

    while (start <= end) {
        if (key == arr[mid]) 
            return mid;

        else if (key > arr[mid]) 
            start = mid + 1;
        
        else
            end = mid - 1;

        mid = (start + end)/2;
    }
    return -1;
}

int main()
{
    int even[6] = { 2,5,6,9,25,44};
    int odd[7] = {2,4,33,48,66,909,6666};
    // int key = 9;
    int bs;
    bs = binarySearch(even, 6, 9);
    printf("%d", bs);

    
    return 0;
}