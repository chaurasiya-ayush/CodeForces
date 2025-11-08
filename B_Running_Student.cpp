
#include <bits/stdc++.h>
using namespace std;

#define loop(i, n) for (int i = 0; i < (n); ++i)
#define scan(x) cin >> x
#define pb push_back
#define all(x) x.begin(), x.end()

int vb, vs, xu, yu;
double eps = 1e-8;

double f(int x) {
    return (double)x / vb + sqrt((double)(x - xu) * (x - xu) + (double)yu * yu) / vs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    scan(n); scan(vb); scan(vs);

    vector<int> x(n);
    loop(i, n) scan(x[i]);

    scan(xu); scan(yu);

    int ans = 1;
    for (int i = 2; i < n; ++i) {
        double di = f(x[i]);
        double dans = f(x[ans]);
        if ((abs(di - dans) < eps && abs(xu - x[i]) < abs(xu - x[ans])) || di < dans)
            ans = i;
    }

    cout << ans + 1 << "\n";
    return 0;
}
