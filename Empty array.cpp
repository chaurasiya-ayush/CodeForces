#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
    }

    while (!freq.empty()) {
        vector<int> level;
        for (auto& p : freq) {
            level.push_back(p.first);
        }
        for (int x : level) cout << x << " ";
        cout << "\n";

        for (int x : level) {
            if (--freq[x] == 0)
                freq.erase(x);
        }
    }

    return 0;
}
