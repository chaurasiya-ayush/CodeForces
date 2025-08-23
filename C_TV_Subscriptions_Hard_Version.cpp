#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, d;
        cin >> n >> k >> d;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        unordered_map<int,int> freq;
        int distinct = 0;

        for (int i = 0; i < d; i++) {
            if (freq[a[i]] == 0) distinct++;
            freq[a[i]]++;
        }
        int ans = distinct;

        for (int i = d; i < n; i++) {
            freq[a[i-d]]--;
            if (freq[a[i-d]] == 0) distinct--;

            if (freq[a[i]] == 0) distinct++;
            freq[a[i]]++;

            ans = min(ans, distinct);
        }

        cout << ans << "\n";
    }
    return 0;
}
