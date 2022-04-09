#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;

    cout << "how many element hold by your array: ";
    int n;
    cin >> n;
    cout << endl;

    // for taking input 
    for(int i = 0; i< n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << endl << endl;

    // for giving output 

    for(int x:v) {
        cout << x << ", ";
    }

    cout << endl << endl;

    cout << "size of the vector: "<<v.size() << endl;
    cout << "capacity of the vector: "<< v.capacity() << endl;
    cout << "max size of the array in worst case: " << v.max_size() << endl;


    return 0;
}