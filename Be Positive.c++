#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int zero =0,neg =0;
        for(int &elem:arr) cin>>elem;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            zero++;
            if(arr[i]==-1)
            neg++;
        }
        int ans = (neg%2)*2 + zero;
        cout<<ans<<endl;
    }
}