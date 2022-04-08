#include <bits/stdc++.h>
using namespace std;

int main () {
    // Note: Binary Search only work for sorted array

    int arr [] = {1, 2, 2, 3, 4, 4,4,4,4,4,4, 5};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    // Note: Binary Search returns only a boolean value true or false

    bool is_availabe = binary_search(arr, arr+arr_size, 4);

    if(is_availabe == true) {
        cout << "Key is available" << endl;
    } else {
        cout << "Key is not available" << endl;
    }

    // Note: Tow More Things to know
    // lower_bound() return the address of the key where the key is matched in first time
    // upper_bound() return the last + 1 address of key where the key is found 

    auto first_it_get = lower_bound(arr, arr+arr_size, 4);
    
    cout << "first time 4 get in the position: " << (first_it_get - arr) << endl;

    auto last_it_get = upper_bound(arr, arr+arr_size, 4);

    cout << "last time 4 get in the position: " << (last_it_get - arr) << endl;

    cout << "4 is repeated in " <<  last_it_get - first_it_get << " times." << endl;


    return 0;
}