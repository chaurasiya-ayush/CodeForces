#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a1(n);
        vector<int>a2(n);
        vector<int>a3(n);
        for(int &elem:a1) cin>>elem;
        for(int &elem:a2) cin>>elem;
        for(int &elem:a3) cin>>elem;
        int i=0;
        int current = 0;
        while(i<n && ((a1[i]|current) <= x) && (a1[i]&(~x))==0 ){
            current = current | a1[i];
            i++;
        }
        i =0;
        while(i<n && ((a2[i]|current) <= x) && (a2[i]&(~x))==0 ){
            current = current | a2[i];
            i++;
        }
        i=0;
        while(i<n && ((a3[i]|current) <= x) && (a3[i]&(~x))==0 ){
            current = current | a3[i];
            i++;
        }
        if(current == x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}