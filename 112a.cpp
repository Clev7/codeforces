#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    for (int i = 0; i < a.length(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    string res;

    if (a < b) {
        res = "-1";
    } else if (a == b) {
        res = "0";
    } else {
        res = "1";
    }

    cout << res << '\n';
}