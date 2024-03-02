#include <iostream> 
#include <stdlib.h>
using namespace std;

int merge(int arr[], int l, int r, int m) {
    int n1 = m - l + 1;
    int n2 = r - m; 

    int leftArray[50], rightArray[50];

    for (int i = 0; i < n1; i++){
        leftArray[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i ++){
        rightArray[i] = arr[m + i];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) { 

        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i ++;
        }
        else {
            arr[k] = rightArray[j];
            j ++;
        }
        k ++;
    }

    while (i < n1) {
        arr[k] = leftArray[i];
        i ++;
        k ++;
    }

    while (j < n2) {
        arr[k] = rightArray[j];
        j ++;
        k ++;
    }
    
}

void mergesort(int arr[], int l, int r){

    int m = l + ((r-l)/2);
    if (l < r){
        mergesort(arr, l, m);

        mergesort(arr, m + 1, r);

        merge(arr, l, r, m);
    }
}

void getArray(int arr[], int size) {
    for (int i = 0; i < size; i ++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main() {

    int arr[6] = {2, 46, 39, 1, -2, 8};
    
    cout << "The Given array is " << endl;
    getArray(arr, 6);

    mergesort(arr, 0, 5);

    getArray(arr, 6);
    return 0;
}