// 🌟 Code by Ayush Chaurasiya — Eat 💻 Sleep 😴 Code ⚡ Repeat 💪
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define scan(x) cin >> x
#define print(x) cout << x << "\n"
#define loop(i, n) for(int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; scan(t);
    while(t--) {
        int n; scan(n);
        vector<ll> a(n);

        ll sum = 0, mn = LLONG_MAX;

        loop(i, n) {
            scan(a[i]);
            sum += a[i];
            mn = min(mn, a[i]);
        }

        // Count segments of minimum
        int seg = 0;
        loop(i, n) {
            if(a[i] == mn && a[(i-1+n)%n] != mn)
                seg++;
        }

        ll ans = sum + (seg - 1) * mn;

        print(ans);
    }

    return 0;
}
