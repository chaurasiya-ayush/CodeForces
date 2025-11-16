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
    string s;
    scan(s);
    char lastChar = s[n-1];
    int cnt =0;
    loop(i,n) if(s[i]==lastChar) cnt++;
    print(n-cnt);
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