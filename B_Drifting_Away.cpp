//  Code by Ayush Chaurasiya — Keep Hustling 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define scan(x) cin >> x
#define print(x) cout << x << "\n"
#define loop(i,k, n) for(int i = k; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
int sum(string s){
    int ans =1,cnt=1;
    int n = s.size();
    loop(i,0,n-1){
        if(s[i]==s[i+1]) cnt++;
        else cnt =1;
        ans = max(ans,cnt);
    }
    return ans;
}
void solve(){
    string s;
    scan(s);
    int n = s.size();
    bool isBool = false;
    loop(i,0,n-1){
        string cases = "";
        cases += s[i];
        cases += s[i+1];
        if(cases == "><" || cases=="*<" || cases == ">*" || cases == "**"){
            isBool = true;
        }
    }
    if(isBool){
        print(-1);
        return ;
    }
    string s1 = s;
    int ans =0;
    loop(i,0,n){
        if(s1[i] == '*'){
            s1[i] = '<';
        }
    }
    ans = sum(s1);
     s1 = s;
    loop(i,0,n){
        if(s1[i] == '*'){
            s1[i] = '>';
        }
    }
    print(max(ans,sum(s1)));
    
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