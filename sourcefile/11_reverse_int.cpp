#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int revn = 0;
    while (n > 0) {
        int cur = n % 10;
        revn = 10 * revn + cur;
        n /= 10;
    }
    cout << to_string(revn) << endl;
}
