#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int>suf;
        unordered_map<int,int>freq;
        unordered_map<int,int>freq2;
        for(int i=n-1;i>=0;i--){
           freq[str[i]]++; 
           suf.push_back(freq.size());
        }
        reverse(suf.begin(),suf.end());
        int ans = INT_MIN;
        for(int i=0;i<n-1;i++){
            freq2[str[i]]++;
            int val = freq2.size();
            ans = max (ans,val + suf[i+1]);
        }
        cout<<ans<<endl;
    }
}