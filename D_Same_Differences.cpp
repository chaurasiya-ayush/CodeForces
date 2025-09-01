#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>freq;
        vector<int>arr(n);
        for(int &elem:arr) cin>>elem;
        for(int i=0;i<n;i++){
            arr[i] = arr[i]-i;
            freq[arr[i]]++;
        }
        long long  ans =0;
        for(auto &elem:freq){
            int val  = elem.second;
           ans += ( (long long)val * (long long)(val - 1) ) / 2;

        }
        cout<<ans<<endl;  
    }
}
