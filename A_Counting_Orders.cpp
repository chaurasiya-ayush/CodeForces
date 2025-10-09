#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int & elem:a) cin>>elem;
        sort(a.begin(),a.end());
        vector<int>b(n);
        for(int &elem:b) cin>>elem;
        sort(b.rbegin(),b.rend());
        long long result = 1;
        for(int i=0;i<n;i++){
            long long temp = upper_bound(a.begin(),a.end(),b[i] ) - a.begin();
            long long count = a.size() - temp;
            // cout<<temp << " ";
            result = result* max(count - i,0LL)%1000000007;
        }
        // cout<<endl;
        cout<<result << endl;
    }
}