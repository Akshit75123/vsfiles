#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n-i; j ++) {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n, sum = 0;
	    int A[100];
	    cin >> n;
	    for (int i = 0; i < n; i++) {
	        cin >> A[i];
	    }
	    // sort the array
	    sortArray(A, n);
	    sum = A[n-1] + A[n-2];
	    cout << sum << endl;
	    
	}
	return 0;
}
