#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> umap;
    while (n--) {
        int k, v;
        cin >> k >> v;
        umap[k] += v;

    }

    vector<pair<int, int >> v(umap.begin(), umap.end());
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.first < b.first;
        });
    for (pair<int, int >& vi : v) {
        cout << vi.first << " " << vi.second << endl;
    }
}