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
        vector<int> a(n);

        int ans = k + 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            int cur = a[i];
            while (cur % k != 0) cur++;
            ans = min(ans, -(a[i] - cur)); // same as cur - a[i]
        }

        if (k == 4) {
            int p2 = 10;
            k = 2;
            for (int i = 0; i < n; i++) {
                int cur = a[i];
                while (cur % k != 0) cur++;
                ans = min(ans, (cur - a[i]) + p2);
                p2 = min(p2, (cur - a[i]));
            }
        }

        cout << ans << "\n";
    }
}
