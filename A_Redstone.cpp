#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        bool flag = false;
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int &elem:arr) cin>>elem;
        unordered_map<int,int>freq;
        for(int elem:arr){
            freq[elem]++;
        }
        for(auto &elem:freq){
            
            if(elem.second > 1){
                flag = true;
            }
        };
        if(flag) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
}