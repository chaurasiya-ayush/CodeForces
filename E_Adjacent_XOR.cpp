#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long>a1(n);
        vector<long>a2(n);
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(int i=0;i<n;i++){
            cin>>a2[i];
        }
        bool flag = true;
        for(int i=0;i<n-1;i++)
        {   
            if(a1[i] != a2[i] && (a1[i]^a1[i+1])!= a2[i] && (a1[i]^a2[i+1])!= a2[i] ){
               flag = false;
            }
        }
        if(a1[n-1] != a2[n-1]) flag = false;
        if(flag ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}