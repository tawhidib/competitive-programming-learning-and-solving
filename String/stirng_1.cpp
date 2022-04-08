#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "I love mango juice";
    int idx = s1.find("apple");
    cout << idx << endl;
    cout << s1 << endl;

    // to remove a word from the string 

    string word = "mango";
    idx = s1.find("mango");
    int word_length = word.length();
    s1.erase(idx, word_length + 1);
    // + 1 for remove extra space 
    cout << s1 << endl;
    return 0;
}