#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long N;
    cin >> N;
    if (N == 2) {
        cout << -1 << "\n";
        return;
    }
    if (N == 3) {
        cout << "1 3\n";
        cout << "2 3\n";
        return;
    }
    if (N == 5) {
        cout << "1 3\n";
        cout << "1 4\n";
        cout << "2 5\n";
        cout << "4 2\n";
        return;
    }

    long long base = N * (N + 1) / 2 - 1;
    long long val = max((long long)sqrt(base) - 5, 0LL);

    // Adjust val so that val^2 is suitable for our logic
    while (val * val < base || (val * val > base && val * val - base < 3)) {
        val++;
    }

    val *= val; // Square the value

    // Case 1: val == base
    if (val == base) {
        for (long long i = 2; i <= N; i++) {
            cout << "1 " << i << "\n";
        }
        return;
    }

    // Case 2: find suitable i and j
    for (long long i = 3; i <= N; i++) {
        if (i == val - base) {
            for (long long j = 2; j <= N; j++) {
                if (j == i) cout << "2 " << j << "\n";
                else cout << "1 " << j << "\n";
            }
            cout << "\n";
            return;
        }

        long long j = val - base - i;
        if (j >= 3 && j <= N && j != i) {
            for (long long k = 2; k <= N; k++) {
                if (k == j || k == i) cout << "2 " << k << "\n";
                else cout << "1 " << k << "\n";
            }
            return;
        }
    }

    // Should never reach here if logic is correct
    cerr << "Unexpected case!\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
