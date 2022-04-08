#include <bits/stdc++.h>
using namespace std;

int main () {
    int arr[] = {1,10,9,100,20,24};
    int arr_size = sizeof(arr)/ sizeof(arr[0]);
    int key;
    cin >> key;

    auto it = find(arr, arr+arr_size, key);

    // this find  method is expect 3 parameters 
    // First one is: array's first index pointer address
    // Second one is: array's last index + 1 position pointer address
    // third one is: seaching key

    // NOTE: the time complexity of FIND function in c++ is O(n)...

    int index = it - arr;

    if(index == arr_size){
        cout << "this item is not available in this array" << endl;
    }else {
        cout << "this item is present at the index = " << index <<endl;
    }

    return 0;
}