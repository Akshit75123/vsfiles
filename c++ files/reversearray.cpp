#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start=0, end= size-1;
    while (start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
}


int main(){
    int s;
    int arr[100];
    
    cin >> s;

    if (s==1){
        cout << "Enter more than one value" <<endl;
    }

    else if (s == 0){
        cout << "Wrong Input" <<endl;
    }

    else if (s>1){

        for (int i=0; i<s; i++){
        cin >> arr[i];
        }

        reverseArray(arr, s);
        printArray(arr, s);
    }
    

    return 0;
}