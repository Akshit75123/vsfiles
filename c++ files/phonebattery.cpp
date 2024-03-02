#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t;
	
	for (int i = 1; i <= t; i ++){
	    int n;
	    
	    cin >> n;
	    
	    // int min = 0;
	    if (n!=50){
	        if (n > 50) {
	            int j = n;
				int min = 0;
	            while (j != 50) {
	            
	                j = j - 3;
	                min ++;
	           		cout << min <<endl;
	            }
	        } 
	        else{
	        
	            int j = n;
				int min = 0;
	            while (j != 50){
	                j = j + 2;
	                min ++;
	           		cout << min <<endl;
	            }
	       }
	    //    cout << min <<endl;
	    }
	    
	    
	    else {
	        cout << 0 << endl;
	    }
	    
	}
	return 0;
}
	       
	        
	     
