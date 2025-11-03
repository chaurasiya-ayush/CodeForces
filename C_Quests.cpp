// 🚀 Code by Ayush Chaurasiya — Keep Hustling 💪
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
    // int n;
    // scan(n);
    // vector<int> arr(n);
    // loop(i, n) scan(arr[i]);
    int n,k;
    scan(n); scan(k);
    vector<int>a(n);
    vector<int>b(n);
    loop(i,n) scan(a[i]);
    loop(i,n) scan(b[i]);
    ll ans =0;
    ll preSum = 0;
    int  maxB = 0;
    loop(i,min(k,n)){
        preSum += a[i];
        maxB = max(maxB,b[i]);
        ll total = preSum + (k-i-1)*maxB;
        ans = max(ans,total);
    }
    print(ans);

    // 👉 Write your logic here
    
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