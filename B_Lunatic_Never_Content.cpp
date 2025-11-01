#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Your logic here 👇
    vector<int>dummy;
    for(int i=0;i<n/2;i++){
        dummy.push_back(abs(arr[i]- arr[n-i-1]));
    }
    int gcd = 0;
    for(int i=0;i<dummy.size();i++){
        gcd = __gcd(gcd,dummy[i]);
    }
    cout<<gcd<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; 
    while(t--){
        solve();
    }
    return 0;
}

