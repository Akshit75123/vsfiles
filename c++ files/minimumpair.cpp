#include<iostream>

using namespace std;

int main(){
    
    int count = 0;
    int arr[5] = {1,3,5,4 ,1};

    for (int i = 0; i<5; i++){
        for (int j=1; j<5; j++){
            if (arr[i] == arr[j]){
                count++;
                break;
                
            }
        }
    }

    cout << count <<endl;

    return 0;
}