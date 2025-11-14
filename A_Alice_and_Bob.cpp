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
    while (t--) {
        int n; ll a; scan(n); scan(a);
        vector<ll> v(n);
        loop(i, n) scan(v[i]);

        int count_left  = int(lower_bound(all(v), a) - v.begin());
        int count_right = int(v.end() - upper_bound(all(v), a));

        if (count_right > count_left) {
            print(a + 1);
        } else {
           
            print(a - 1);
        }
    }
    return 0;
}
