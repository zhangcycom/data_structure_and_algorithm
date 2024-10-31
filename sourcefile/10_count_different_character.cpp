#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> set;
    for (char ch : s) {
        set.insert(ch);
    }
    cout << set.size() << endl;
}