#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.rbegin(), arr.rend());

        vector<long long> prefix(n);
        prefix[0] = arr[0];
        for (int i = 1; i < n; i++) prefix[i] = prefix[i-1] + arr[i];

        while (q--) {
            long long target;
            cin >> target;
            auto it = lower_bound(prefix.begin(), prefix.end(), target);
            if (it == prefix.end()) cout << -1 << "\n";
            else cout << (it - prefix.begin() + 1) << "\n";
        }
    }
}
