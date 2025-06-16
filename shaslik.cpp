#include <iostream>
using namespace std;

void solve() {
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    // Always use the smaller cost first to maximize usage
    if (x > y) {
        swap(a, b);
        swap(x, y);
    }

    int ans = 0;

    // Use x as long as k >= a
    if (k >= a) {
        int n = 1 + (k - a) / x;
        ans += n;
        k -= n * x;
    }

    // Use y as long as k >= b
    if (k >= b) {
        int n = 1 + (k - b) / y;
        ans += n;
    }

    cout << ans << endl;
}

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        solve();
    }

    return 0;
}
