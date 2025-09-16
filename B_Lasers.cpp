#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int>horizontalArr(n);
        vector<int>verticalArr(m);
        for(int &elem:horizontalArr) cin>>elem;
        for(int &elem:verticalArr) cin>>elem;
        int cnt =0;
        for(int i=0;i<n;i++){
            if(y >= horizontalArr[i]){
                cnt++;
            }
            
        }
        for(int i=0;i<m;i++){
            if(x >= verticalArr[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}