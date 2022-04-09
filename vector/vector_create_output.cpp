#include <bits/stdc++.h>
using namespace std;

int main() {
    // create and initialize a vector 
    vector <int> a;
    vector <int> b(5, 0);
    vector <int> c(b.begin(), b.end());
    vector <int> d{1,2,3,4,5};

    // iterate over the vector 

    // 1st way 
    for(int i = 0; i < c.size(); i++) {
        cout << c[i] << ", ";
    }
    cout <<endl <<endl << endl;

    // 2nd way 
    for(auto it = d.begin(); it!=  d.end(); it++) {
        cout << *it << ", ";
    }
    cout <<endl <<endl << endl;

    //3d way
    // note: foreach loop

    for(auto x:d) {
        cout << x << ", ";
    }

    cout <<endl <<endl << endl;
    return 0;
}