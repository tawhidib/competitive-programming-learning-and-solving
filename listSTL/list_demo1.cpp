#include <bits/stdc++.h>
using namespace std;

int main() {
    // initializing way of list
    list <int> l;
    list <int> l2{1,2,3,4,5};
    list <string> l3{"apple", "banana", "mango", "jackfruit"};

    l3.push_back("pineapple");
    l3.push_back("guava");

    // iterate over the list and print data

    

    for(string s: l3) {
        cout << s << " -- ";
    }

    cout << endl;

    // reverse the list
    l3.reverse();

    cout << "after reverse" <<endl;

    for(string s: l3) {
        cout << s << " -- ";
    }

    cout << endl;

    // sort alphabetically

    l3.sort();
    cout << "after sort" <<endl;

    for(string s: l3) {
        cout << s << " -- ";
    }

    cout << endl;

    // remove an item from front
    l3.pop_front();

    cout << "after pop from front" <<endl;

    for(string s: l3) {
        cout << s << " -- ";
    }

    cout << endl;

    // add an element as the first element

    l3.push_front("kivi");

    cout << "after push in front" <<endl;

    for(string s: l3) {
        cout << s << " -- ";
    }

    // 
    
    cout << endl;



    for(string s: l3) {
        cout << s << " -- ";
    }

    // 

    cout << endl;

    // get first element value 
    cout << "front: " << l3.front() << endl;

    // get last element value
    cout << "back: " << l3.back() << endl;

    // remove by the value
    // it will remove all the matched key
    string f = "kivi";
    l3.remove(f);
    cout << "after remove by key" << endl;



    for(string s: l3) {
        cout << s << " -- ";
    }

    cout << endl << endl << endl;

    // erase one or more element

    auto it = l3.begin();

    it++;
    it++;


    l3.erase(it);

    cout << "after erase" << endl;

    for(string s: l3) {
        cout << s << " -- ";
    }

    // insert in particular index 

    auto it2 = l3.begin();

    it2++;
    
    l3.insert(it2, "orange");

    cout << endl << endl << "after insert a particualr index" << endl;

    for(string s: l3) {
        cout << s << " -- ";
    }

    cout << endl;

   return 0;
}