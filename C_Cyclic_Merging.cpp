//  Code by Ayush Chaurasiya — Keep Hustling 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define scan(x) cin >> x
#define print(x) cout << x << "\n"
#define loop(i, n) for(int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(){
    int n;
    scan(n);
    vector<int> v(n);
    loop(i, n) scan(v[i]);

        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += max(v[i], v[(i + 1) % n]);
 
        int mx = 0;
        for (int i = 0; i < n; i++)
            mx = max(mx, v[i]);
 
        cout << sum - mx << "\n";
}

int32_t main(){
    fastio;
    int t = 1;
    scan(t);
    while(t--){
        solve();
    }
    return 0;
}