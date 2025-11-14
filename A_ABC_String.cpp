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
   string s;
   scan(s);
   int n = s.size();
   if(s[0] == s[n-1]){
    no;
   }
   else{
        char first = s[0];
        char last = s[n-1];
        char med = 'A' + 'B' + 'C' -first - last;
        int countMed=0;
        int countLast=0;
        int countFirst=0;
        for(char elem:s){
            if(elem == first) countFirst++;
            else if(elem == last)  countLast++;
            else countMed++;
        }
        if(countFirst == countMed + countLast){
            int sum =0;
            bool isBool = true;
           for(char elem:s){
            if(elem == first) sum++;
            else sum--;
            if(sum<0){ isBool = false; break;}
        } 
        if(sum==0 && isBool== true) yes;
        else no;
        }else{
              int sum =0;
            bool isBool = true;
           for(char elem:s){
            if(elem == first || elem == med) sum++;
            else sum--;
            if(sum<0){ isBool = false; break;}
        } 
        if(sum==0 && isBool== true) yes;
        else no;
        }
   }
    
    
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