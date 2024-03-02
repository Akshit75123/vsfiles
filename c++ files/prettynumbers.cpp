#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=1;i<=n;i++){
        int l, r;
        cin >> l >> r;

        int arr[(r-l)+1];
        for (int j=l; j<=r; j++){
            arr[i]=j;
        }

         int rem, count;

        for (int j=l;j<=r;j++){
            if (l>10 && r>10){
                rem = arr[i] % 10;
                if (rem ==2 || rem==3 || rem==9){
                    count++;
                }
            }
            
            else{
                if(j==2||j==3||j==9)
                    count++;
            }
        }
        cout << count <<endl;
    }
}
            
            




