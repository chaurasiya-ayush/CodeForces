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
    double a,b,n;
    cin>>a>>b>>n;
    if( b <= a && b <= a/n ) return 1;
    if( a <= b && a/n <= (b)) return 1;
    if((a<=b && a/n >=(b) ) || (a>=b && a/n<= (b))) return 2;
   return 1;   
}
int32_t main(){
    fastio;
    int t = 1;
    scan(t);
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}