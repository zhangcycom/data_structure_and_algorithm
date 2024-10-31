#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        swap(s[i], s[j]);
    }
    cout << s << endl;
}