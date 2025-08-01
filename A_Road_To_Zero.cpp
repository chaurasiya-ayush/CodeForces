#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        long long ca, cb;
        cin >> a >> b >> ca >> cb;

        // Minimize cb to at most 2*ca
        cb = min(cb, 2 * ca);

        // Ensure a <= b
        if (a > b) swap(a, b);

        long long ans = ca * (b - a);

        if (b < 0) {
            ans -= cb * b;
        }

        if (a > 0) {
            ans += cb * a;
        }

        cout << ans << endl;
    }

    return 0;
}
