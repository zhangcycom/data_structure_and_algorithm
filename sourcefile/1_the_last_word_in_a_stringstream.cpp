#include <iostream>
#include <string>

using namespace std;

int lastWordLen(string& s) {
    int len = 0;
    int j = s.size() - 1;
    while (j >= 0 && s[j] == ' ') {
        j--;
    }
    while (j >= 0 && s[j] != ' ') {
        len++;
        j--;
    }
    return len;
}

int main() {
    string s;
    getline(cin, s);
    cout << lastWordLen(s) << endl;
    return 0;
}