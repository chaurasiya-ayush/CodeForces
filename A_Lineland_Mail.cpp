#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<ll> a(n + 2);  // a[1] to a[n], with a[0] and a[n+1] as guards
    a[0] = -1e18;         // very small number for edge handling
    a[n + 1] = 1e18;      // very large number for edge handling

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        ll minDiff = min(a[i] - a[i - 1], a[i + 1] - a[i]);
        ll maxDiff = max(a[i] - a[1], a[n] - a[i]);
        cout << minDiff << " " << maxDiff << "\n";
    }

    return 0;
}
