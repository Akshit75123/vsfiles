#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int max = INT_MIN;
    int arr[4] = {4, 2, 7, 2};

    for (int i=1; i<=4; i++){
        
            if (arr[i]>max) {
                max=arr[i];
                if (arr[i+1]>max){
                    max=arr[i];
                }
            }
        
    }
    cout << max<<endl;
    return 0;
}