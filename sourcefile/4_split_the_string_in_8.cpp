#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    if (s.empty()) return 0;
    while (s.size() > 8) {
        cout << s.substr(0, 8) << endl;
        s = s.substr(8);
    }
    cout << s.append(8 - s.size(), '0');
    return 0;
}
