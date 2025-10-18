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
        int cnt =0;
        for(int i=0;i<n;i++){
            if(str[i] == '1'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                cout<<i+1<<" ";
            }
        }
    }
}