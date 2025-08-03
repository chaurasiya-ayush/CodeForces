#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    short m, n;
    cin >> m >> n;

    short a[55];
    for (short i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    short ans = a[m - 1] - a[0];  // Initial window
    for (short i = 1; i + m - 1 < n; ++i) {
        ans = min(ans, (short)(a[i + m - 1] - a[i]));
    }

    cout << ans;
    return 0;
}
