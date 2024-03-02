#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin >> t;
	for (int i = 1; i < t; t ++){
	    int arr[10];
	    int count1=0,count2=0;
	    for (int i = 0; i <10; i ++){
	        cin >> arr[i];
			if(i%2==0){
				if(arr[i]==1)
					count1++;
			}
			else{
				if(arr[i]==1)
					count1++;
			}
	    }
	    if(count1>count2)
		{
			cout<<1<<endl;
		}
		else if(count2>count1)
		{
			cout<<2<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}
