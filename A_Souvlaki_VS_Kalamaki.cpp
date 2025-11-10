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
  sort(all(arr));
  bool isBool = true;
  for(int i=1;i<n-1;i+=2){
    if(arr[i] != arr[i+1]){  isBool = false;}
  }
  if(isBool) yes;
  else no;

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