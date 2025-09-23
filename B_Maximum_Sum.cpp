#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        // prefix sum
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + a[i];
        }

        long long ans = 0;
        // try x pairs of minimums (2*x from left) and (k-x) maximums from right
        for (int x = 0; x <= k; x++) {
            int l = 2 * x;
            int r = n - 1 - (k - x);

            if (l <= r) {
                long long sumRemaining = pref[r + 1] - pref[l];
                ans = max(ans, sumRemaining);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
