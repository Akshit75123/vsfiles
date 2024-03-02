#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size)
{
    for(int i = 0; i < size; i=i+2){
        if (i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}


int main(){

    int arr[8] = {45,67,54,3,5,4,22,55};
    int odd[5] = {3,66,5,4,33};

    swapAlternate(arr, 8);

    printArray(arr, 8);

    swapAlternate(odd, 5);

    printArray(odd, 5);


    return 0;
}