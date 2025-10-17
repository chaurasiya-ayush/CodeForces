#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            // Already equal, no operations needed
            cout << 0 << "\n";
        } else {
            long long x = a ^ b;
            if (x <= a) {
                // One operation is enough
                cout << 1 << "\n";
                cout << x << "\n";
            } else {
                if (a == 0) {
                    // Impossible, since x > a
                    cout << -1 << "\n";
                } else {
                    // Two operations trick: a -> 0 -> b
                    cout << 2 << "\n";
                    cout << a << " " << (a ^ b) << "\n";
                }
            }
        }
    }

    return 0;
}
