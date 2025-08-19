#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<char>ans;
    for(int i= n-1;i>=0;i--){
        if(i%2!=0)
        ans.push_back(str[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans.push_back(str[i]);
        }
    }
    if(n%2!=0){
        for(int i=0;i<n;i++) cout<<ans[i];
    }else{
        for(int i=n-1;i>=0;i--) cout<<ans[i]; 
    }
    
}