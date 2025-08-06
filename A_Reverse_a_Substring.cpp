#include<bits/stdc++.h>
using namespace std;
vector<int> check (string str,int n){
    for(int i=0;i<str.size()-1;i++){
        if(str[i] > str[i+1]) return {i+1,i+2};
    }
    return {-1,-1};
}
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int>ans = check(str,n);
    if(ans[0] == -1 && ans[1] == -1) cout<<"NO";
    else{
        cout<<"YES"<<endl;
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    
    
}