#include <bits/stdc++.h>
using namespace std;

string symmetricPossible(long long n, long long a, long long b) {
    if ((n - b) % 2 != 0) return "NO";            
    if (a <= b) return "YES";                    
    return ((n - a) % 2 == 0) ? "YES" : "NO";    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        cout<<symmetricPossible(n,a,b)<<endl;
    }
}