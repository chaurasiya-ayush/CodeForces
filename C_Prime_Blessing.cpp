// 🌟 Code by Ayush Chaurasiya — Eat 💻 Sleep 😴 Code ⚡ Repeat 💪
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define scan(x) cin >> x
#define print(x) cout << x << "\n"
#define loop(i, n) for(int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
const ll MOD = 1e9 + 7;

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    scan(N);
    vector<ll> a(N);
    loop(i, N) scan(a[i]);

    // Frequency map
    unordered_map<ll, ll> freq;
    for (ll x : a) freq[x]++;

    // Get sorted unique values
    vector<ll> vals;
    for (auto &p : freq) vals.push_back(p.first);
    sort(all(vals));

    ll ans = 0;

    for (int i = 0; i < vals.size(); i++) {
        for (int j = i; j < vals.size(); j++) {
            
            ll x = vals[i], y = vals[j];
            ll S = (y - x + 1) * (x + y) / 2;

            if (isPrime(S)) {
                if (x == y) {
                    ll f = freq[x];
                    ans = (ans + (f * (f + 1) / 2) % MOD) % MOD;
                } else {
                    ans = (ans + (freq[x] * freq[y]) % MOD) % MOD;
                }
            }
        }
    }

    print(ans % MOD);
    return 0;
}
