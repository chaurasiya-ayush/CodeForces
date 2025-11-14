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
    string str;
    scan(str);
    int n = str.size();
    int index1=0;
    int index2=0;
      int countLeft =0;
     int countRight =0;
    if(n==1) { return 1 ;}
    int countAst =0;
    loop(i,n){
        if(str[i]=='*'){
            countAst++;
        }
    }
    if(countAst >0) return -1;
    for(int i=0;i<n;i++){
        if(str[i]=='>'){
            index1 = i;
            break;
        }
    } 
    for(int i=n-1;i>=0;i--){
        if(str[i]=='<'){
            index2 = i;
            break;
        }
    }   
    if(index1 < index2){
        return -1;
    }
    if(index1 ==0 && index2 ==0){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(str[i]=='<'){
            countLeft++;
        }else{
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(str[i]=='>'){
            countRight++;
        }else{
            break;
        }
    }

    return max(countLeft,countRight);
   

    
}

int32_t main(){
    fastio;
    int t = 1;
    scan(t);
    while(t--){
        print(solve());
    }
    return 0;
}