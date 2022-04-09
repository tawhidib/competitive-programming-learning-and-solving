#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v{1,2,3,4,5};

    //push_back(x) will add an element in the last
    // time complexity: O(1) if capacity is not overloaded

    v.push_back(6);

    for(int x:v) {
        cout << x << ", ";
    }

    cout <<endl << "after push_back" <<endl;


    // pop_back() will remove the last element of the vector
    // time complexity: O(1)

    v.pop_back();

    for(int x:v) {
        cout << x << ", ";
    }

    cout <<endl << "after pop_back" <<endl;

    // Insert a element in the middle
    // Time Complexity: O(1)

    v.insert(v.begin() + 2, 10);

    for(int x:v) {
        cout << x << ", ";
    }

    cout <<endl << "after Insert a element in the middle" <<endl;

    // Insert multiple element with same value

    v.insert(v.begin() +  3, 4, 100);

    for(int x:v) {
        cout << x << ", ";
    }

    cout <<endl << "after Insert multiple element with same value" <<endl;

    // Erase an elevemt in the middle 

    v.erase(v.begin() + 5);

    for(int x:v) {
        cout << x << ", ";
    }

    cout <<endl << "after Erase an elevemt in the middle " <<endl;

    // Get current size of the vectior

    cout << "current size of the vector: " <<v.size() << endl << endl;

    // Get current capacity of the vector

    cout << "Current capacity of the vector is:" << v.capacity() << endl << endl << endl;




    v.push_back(56);
    v.push_back(56);

    
    cout << "Current capacity of the vector is:" << v.capacity() << endl << endl << endl;


    


    // To get the first element value of a vector 

    cout << "First elevemnt value is "<< v.front()  << endl <<endl;

    // To get the last element value of a vector 
    cout << "Last elevemnt value is "<< v.back()  << endl <<endl;  

    // remove all the element from the vector
    v.clear();

    // check Is vector empty or not

    if(v.empty()) {
        cout << "vector is empty" << endl << endl;
    }  

    vector <int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    cout << "current size of 'a' the vector: " <<a.size() << endl << endl;

    cout << "Current capacity of 'a' the vector is:" << a.capacity() << endl << endl << endl;


    // to reserve a capacity of a vector

    a.reserve(1000);

    cout << "AFTER RESERVE: acurrent size of 'a' the vector: " <<a.size() << endl << endl;

    cout << "AFTER RESERVE: Current capacity of 'a' the vector is:" << a.capacity() << endl << endl << endl;

    return 0;
}