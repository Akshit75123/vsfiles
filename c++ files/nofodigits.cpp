#include <iostream>
using namespace std;

int main() {

    int n, q;
    cin >> n;

    while (n > 0){
        q ++;
        n = n / 10; 
    }

    if (q == 1){
        cout << 1 <<endl;
    }

    else if (q == 2){
        cout << 2 <<endl;
    }

    else if (q == 3){
        cout << 3 <<endl;
    }

    else {
        cout << "More than 3 digits" <<endl;
    }
    return 0;
}


