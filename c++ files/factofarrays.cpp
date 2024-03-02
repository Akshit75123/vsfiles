#include <iostream>

using namespace std;

int iterativeFactorial(int n){
    int fact=1;
    
    for (int i=1; i <= n; i++){
        fact = fact*i;
    }

    return fact;
}

void printArray(int arr[], int n){
    for (int i=0; i< n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    int arr[100];
    int fact[100];

    cin >> n;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for (int i=0; i<n; i++){
        fact[i] = iterativeFactorial(arr[i]);
    }
    
    printArray(fact, n);
}


