#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i ++){
        int temp = arr[i];
        int j = i - 1;
        for (;j >= 0; j --) {
            
            if (arr[j] > temp)  {
                //shift
                arr[j+1] = arr[j];
            }

            else { //ruk jao
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void getArray(int arr[], int n) {
    for (int i = 0; i < n; i ++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int arr[5] = { 6, 2, 8, 4, 10};

    cout << "The Given Array is" <<"\t";
    getArray(arr, 5);
    
    insertionSort(arr, 5);
    
    cout << "The Sorted Array is" <<"\t";
    getArray(arr,5);
    return 0;
}