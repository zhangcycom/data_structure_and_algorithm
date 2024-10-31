#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(const string& s1, const string& s2) {
    return s1 < s2;
}

int main() {
    int n;
    cin >> n;
    vector<string> v;
    while (n--) {
        string s;
        cin >> s;
        v.emplace_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    for (string& vi : v) {
        cout << vi << endl;
    }
}
