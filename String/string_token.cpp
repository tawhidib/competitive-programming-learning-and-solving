#include <bits/stdc++.h>
using namespace std;

int main () {
    char s[100] = "Bangladesh is a beautiful country.";
    char *ptr = strtok(s, " ");
    cout << ptr << endl;

    while (ptr!=NULL) {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
    return 0;
}
