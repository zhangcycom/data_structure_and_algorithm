#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    int n_int = n;
    double diff = n - n_int;
    if (diff >= 0.5) {
        n_int += 1;
    }
    cout << n_int << endl;
}
