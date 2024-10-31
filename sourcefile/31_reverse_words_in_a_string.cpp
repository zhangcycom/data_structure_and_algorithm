#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i = 0;
    vector<string> vs;
    while (s[i] != '\0') {
        while (i < s.size() && !('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z')) {
            i++;
        }
        string tmp = "";
        while (i < s.size() && ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z')) {
            tmp += s[i];
            i++;
        }
        vs.push_back(tmp);
    }
    for (int i = vs.size() - 1; i >= 0; i--) {
        cout << vs[i] << " ";
    }
    return 0;
}
