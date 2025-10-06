#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int total = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') arr[i] = 1;
            else arr[i] = -1;
            total += arr[i];
        }

        if (total == 0) {
            cout << 0 << "\n";
            continue;
        }
        if (abs(total) == n) {
            cout << -1 << "\n";
            continue;
        }

        unordered_map<int, int> mp;
        mp[0] = -1;
        int pref = 0;
        int min_len = n+1;
        for (int i = 0; i < n; i++) {
            pref += arr[i];
            if (mp.find(pref - total) != mp.end()) {
                min_len = min(min_len, i - mp[pref - total]);
            }
            if (mp.find(pref) == mp.end()) {
                mp[pref] = i;
            }
        }

        cout << min_len << "\n";
    }
}
