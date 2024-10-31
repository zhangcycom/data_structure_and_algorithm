#include <functional>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, n;
    cin >> N;
    unordered_map<int, int> a;
    while (N--) {
        cin >> n;
        a[n] = 1;
    }
    for (int i = 1; i < 1000; i++) {
        if (a[i] == 1) {
            cout << i << endl;
        }
    }
    return 0;
}
