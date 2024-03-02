#include <iostream>
using namespace std;



int main() {
    int zero=0, one=0, two=0;
    int arr[100];
    int n, i;
    cout << "Enter the size of an array\t";
    //taking input the size of the array
    cin >> n;
    
    //taking the array elements input
    for (i=0; i<n; i++){
        cin >> arr[i];
    }

    //printing the array  elements entered by user
    cout << "The array you entered is\n";
    for (int i=0; i<n; i++)
        cout << arr[i] + " ";
    
    //storing all zeroes, ones and twos in the assinged variables..
    for (i=0; i<n; i++){
        //zeroes
        if (arr[i]==0)
            zero++;
        // ones 
        else if(arr[i]==1)
            one++;
        // twos 
        else if(arr[i]==2){
            two++;
        }
    }

    //creating the new array
    
    i=0;
    // for zeroes
    while(zero>0){
        arr[i++]=0;
        zero--;
    }

    // for ones
    while(one>0){
        arr[i++]=1;
        one--;
    }

    // for zeroes
    while(two>0){
        arr[i++]=2;
        two--;
    }
    //new array created

    //now printing the array
    
    cout << "The new array is";
    for (int i=0; i<n; i++)
        cout << arr[i] + " ";
    
}