#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int newn = 0;
    set<int> set;
    while (n > 0) {
        int cur = n % 10;
        if (set.find(cur) == set.end()) {
            set.insert(cur);
            newn = newn * 10 + cur;
        }
        n /= 10;
    }
    cout << newn << endl;
}
