#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v[3];  // v[0]: team 1, v[1]: team 2, v[2]: team 3

    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        v[t - 1].push_back(i + 1);  // Store 1-based index
    }

    int teams = min({v[0].size(), v[1].size(), v[2].size()});
    cout << teams << '\n';

    for (int i = 0; i < teams; ++i) {
        cout << v[0][i] << ' ' << v[1][i] << ' ' << v[2][i] << '\n';
    }

    return 0;
}
