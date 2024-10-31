#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int times(string& s, char ch) {
    int times_ch = 0;
    ch = tolower(ch);
    for (int i = 0; i < s.size(); i++) {
        if (tolower(s[i]) == ch) {
            times_ch++;
        }
    }
    return times_ch;
}

int main() {
    string s;
    char ch;
    getline(cin, s);
    cin >> ch;
    cout << times(s, ch) << endl;
}
