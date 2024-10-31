#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    istringstream iss(s);
    string word;
    vector<string> v;
    while (iss >> word) {
        v.emplace_back(word);
    }
    for (int j = v.size() - 1; j >= 0; j--) {
        cout << v[j] << " ";
    }
}