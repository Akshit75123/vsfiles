#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for (int i = 1; i < n; i ++){ //for rounds 1 to n - 1
        bool swapped = false;
        for (int j = 0; j < n-i; j++){
            if (arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
    }
}

int main() {

    return 0;
}