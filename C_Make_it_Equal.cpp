#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a1(n);
        vector<int>a2(n);
        for(int &elem:a1) cin>>elem;
        for(int &elem:a2) cin>>elem;
        for(int i=0;i<n;i++){
            a1[i] = a1[i]%k;
            a2[i] = a2[i]%k;
            a1[i] = min(a1[i],k-a1[i]);
            a2[i] = min(a2[i],k-a2[i]);
           
        }
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        if(a1==a2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}