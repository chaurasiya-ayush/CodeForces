
#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < (int)(n); ++i)
#define scan(x) cin >> x
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
using namespace std;

const int INF = 1e9 + 100500;
const int MAXN = 100500;

int a[MAXN], d[MAXN];
int n;

void solve() {
    scan(n);
    loop(i, n) scan(a[i]);

    loop(i, n) {
        d[i] = 1;
        if (i > 0 && a[i] >= a[i - 1])
            d[i] = d[i - 1] + 1;
    }

    cout << *max_element(d, d + n) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
