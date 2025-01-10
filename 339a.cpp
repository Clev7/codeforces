#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<long long>;

int main(void) {
    string s;

    getline(cin, s);

    stringstream sstream(s);

    vector<int> nums;

    while (getline(sstream, s, '+')) {
        nums.push_back(stoi(s));
    }

    // for (int i = 0; i < nums.size(); i++) {
    //     cout << nums[i] << " ";
    // }

    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << (i == nums.size() - 1 ? '\n' : '+');
    }
}