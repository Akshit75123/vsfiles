#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while (t--){
	    
	    int x,y;
	    cin>> x >> y;
	    
	    int diff = x-y;
	    int min=y;
	    int count=0;
	    
	    for (int i = 1; i <= diff; i++){
	        min= min+i;
	        count ++;
	        if (min > x)
	            break;
				
			
		}
	    cout << count <<endl;
	    
	}
	return 0;
}
