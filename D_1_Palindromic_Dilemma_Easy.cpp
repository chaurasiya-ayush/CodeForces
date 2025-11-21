
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define scan(x) cin >> x
#define print(x) cout << x << "\n"
#define loop(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()

const ll MOD = 1000000007;

ll modpow(ll a, ll e){
    ll r = 1 % MOD;
    a %= MOD;
    while(e > 0){
        if(e & 1) r = (r * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    scan(n);

    int half = n / 2;
    ll ans = (9 * modpow(10, half - 1)) % MOD;

    print(ans);
    return 0;
}
