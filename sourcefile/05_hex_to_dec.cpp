#include <iostream>
#include <string>
using namespace std;

int main() {
    string hex;
    cin >> hex;
    int Dnum = 0;
    int wei = 1;
    for (int i = hex.size() - 1; i >= 2; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            Dnum += wei * (hex[i] - '0');
        }
        else if ((hex[i] >= 'a' && hex[i] <= 'f') || (hex[i] >= 'A' && hex[i] <= 'F')) {
            Dnum += wei * (tolower(hex[i]) - 'a' + 10);
        }
        wei *= 16;
    }
    cout << Dnum << endl;
}
