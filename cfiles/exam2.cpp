#include <bits/stdc++.h>
using namespace std;
/* Logic to sort the array containing 0s,1s and 2s, without using any sorting algorithm is that we count the number of 0s, 1s and 2s.*/
int main()
{
    // Here first of all, we take the size of the array as input.
    cout << "Enter the size of the array: ";
    // integer n is the size of the array
    int n;
    cin >> n;
    // Vector v stores the array elements
    vector<int> v(n);
    // integer c0 stores the number of 0s in the array input.
    // integer c1 stores the number of 1s in the array input.
    // integer c2 stores the number of 2s in the array input.
    int c0 = 0, c1 = 0, c2 = 0;
    // if array size is 0 or negative, it is invalid.
    if (n <= 0)
    {
        cout << "Array size is invalid.\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                c0++;
            }
            else if (v[i] == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        /* At last to print the sorted array, we print c0 times 0
            We print c1 times 1
            We print c2 times 2*/
        cout << "The sorted array is :\n";
        for (int i = 0; i < c0; i++)
        {
            cout << "0"<< " ";
        }
        for (int i = 0; i < c1; i++)
        {
            cout << "1" << " ";
        }
        for (int i = 0; i < c2; i++)
        {
            cout << "2" << " ";
        }
        cout << endl;
    }
    // Hence, in this way we have sorted the array without using any sorting algorithm.
    return 0;
}