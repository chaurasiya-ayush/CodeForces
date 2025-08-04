#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> // for memset

using namespace std;

const int N = 2e5 + 5;

int t, n;
int a[N], b[N], countA[N * 2], countB[N * 2], freq[N];

void Solve() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;

        // Reset arrays
        for (int i = 1; i <= n; i++) freq[i] = 0;
        for (int i = 1; i <= 2 * n; i++) countA[i] = countB[i] = 0;

        // Input arrays
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        // Process array a[]
        for (int i = 1; i <= n; i++) {
            if (a[i] == a[i - 1]) {
                freq[i] = freq[i - 1] + 1;
            } else {
                freq[i] = 1;
            }
            countA[a[i]] = max(countA[a[i]], freq[i]);
        }

        // Reset freq for b[]
        memset(freq, 0, sizeof(int) * (n + 1));

        // Process array b[]
        for (int i = 1; i <= n; i++) {
            if (b[i] == b[i - 1]) {
                freq[i] = freq[i - 1] + 1;
            } else {
                freq[i] = 1;
            }
            countB[b[i]] = max(countB[b[i]], freq[i]);
        }

        // Final answer
        int ans = 0;
        for (int i = 1; i <= 2 * n; i++) {
            ans = max(ans, countA[i] + countB[i]);
        }

        cout << ans << '\n';
    }
}

int main() {
    Solve();
    return 0;
}
