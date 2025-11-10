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
    vector<int> arr(n);
    loop(i, n) scan(arr[i]);

    //  Write your logic here
    int p1 = 0;
    int p2 = n-1;
    long long preSum = arr[0];
    long long sufSum = arr[n-1];
    long long  ans= 0;
    while(p1 < p2){
        if(preSum == sufSum){
            p1++;
            p2--;
            ans = max(ans,preSum);
            preSum = preSum + (ll)arr[p1];
            sufSum = sufSum + (ll) arr[p2];
        }
        else if(preSum < sufSum){
            p1++;
            preSum += (ll)arr[p1];
        }else{
            p2--;
            sufSum += (ll)arr[p2];
        }
    }
    print(ans);
    
}

int32_t main(){
    fastio;
    solve();
    return 0;
}