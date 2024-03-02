#include <iostream>

using namespace std;

int main(){
    int size, target, sum;
    cin >> size; // size of array
    int nums[100];
    for (int i = 0; i < size; i ++){
        cin >> nums[i];
    }

    cin >> target;

    for (int i = 0; i < size; i ++){
        for (int j = 1; j < size; j ++){
            sum = nums[i] + nums[j];
            if (sum == target){
                cout << i << " " << j;
                cout << endl;
            }
            
        }
    }

    
    return 0;
}