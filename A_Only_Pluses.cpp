#include <iostream>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long ans = 0;

    for (int da = 0; da <= 5; da++) {
        for (int db = 0; db + da <= 5; db++) {
            int dc = 5 - da - db;
            long long product = (a + da) * (b + db) * (c + dc);
            ans = max(ans, product);
        }
    }

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
