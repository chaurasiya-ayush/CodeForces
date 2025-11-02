#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define PI 3.1415926535897932384626433832795
#define sqr(x) ((x)*(x))
#define OUT_RT cerr << (float(clock()) / CLOCKS_PER_SEC) << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, x;
    vector<int> d(5, 0);  // for 1,2,3,4

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        d[x]++;
    }

    int ans = d[4];

    // Pair 3s with 1s
    int pair31 = min(d[3], d[1]);
    d[1] -= pair31;
    ans += d[3];

    if (d[2] % 2 == 0) {
        ans += d[2] / 2;
        ans += (d[1] + 3) / 4;
    } else {
        ans += (d[2] + 1) / 2;
        if (d[1] > 2) {
            d[1] -= 2;
            ans += (d[1] + 3) / 4;
        }
    }

    cout << ans << '\n';
    return 0;
}
