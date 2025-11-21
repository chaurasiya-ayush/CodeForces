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

int solve(){
    int n;
    scan(n);
    vector<int> arr(n);
    vector<int> brr(n);
    loop(i, n) scan(arr[i]);
    loop(i, n) scan(brr[i]);
    for(int i=31;i>=0;i--){
        int cntA =0;
        int cntB =0;
        for(int j =0;j<n;j++){
            if(((arr[j]>>i)&1)==1){
                cntA++;
            }
             if(((brr[j]>>i)&1)==1){
                cntB++;
            }
        }
    //    cout<<i<<" "<<cntA<<" "<<cntB<<endl;
        if(cntA%2 != cntB%2){
            for(int k=n-1;k>=0;k--){
                if(((brr[k]>>i)&1) != ((arr[k]>>i)&1)){
                     return k+1;
                }
            }
        }
    }
    return -1;

    
}

int32_t main(){
    fastio;
    int t = 1;
    scan(t);
    while(t--){
        int index = solve();
    if(index == -1) print("Tie");
    else if(index%2 == 0) print("Mai");
    else print("Ajisai");
    }
    return 0;
}