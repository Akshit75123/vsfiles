#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while (t --){
	    int n, count1 = 0, count2 = 0;
	    cin >> n;
	    
	    char contest[40];
	    
	    for (int i = 1; i < n; i ++) {
	        cin >> contest[i];
	        
	        switch (contest[i])
            {
            case 'START38':
                /* code */
                count1 ++;
                break;

            case 'LTIME108':
                /* code */
                count2 ++;
                break;
            
            
            }
	    }
	    
	    cout << count1 << " " << count2 << endl;
	    
	}
	return 0;
}
	    
	    
	    
	    
