#include <iostream>
#include <limits.h>
using namespace std;

int maxArray(int arr[], int size){
    int max= INT_MIN;

    for (int i=0; i<size; i++){
        if (arr[i]>max)
            max=arr[i];
    }

    return max;
}

int minArray(int arr[], int size){

    int min= INT_MAX;

    for (int i=0; i<size; i++){
        if (arr[i]<min)
            min=arr[i];
    }

    return min ;
}



int main(){

    int size;
    int arr[100];
    
    cin>>size;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    
    cout<<"Maximum element of the Array is"<< "" << maxArray(arr, size)<<endl;
    cout<<"Minimum element of the Array is"<< "" << minArray(arr, size)<<endl;
    
    

    return 0;
}