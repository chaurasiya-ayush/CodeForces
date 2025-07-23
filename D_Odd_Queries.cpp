#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>arr(n);
        int toSum =0;
        for(int &elem:arr) cin>>elem;
        for(int i=0;i<n;i++){
            toSum += arr[i];
        }
        for(int i=1;i<n;i++){
            arr[i] += arr[i-1];
        }
        for(int i=0;i<q;i++){
            int l,r,k;
            cin>>l>>r>>k;
            int sum1=0;
            int sum2 =0;
            if(l!=1){
                sum1 = arr[l-2];
            }
            sum2 = arr[r-1];
            // cout<<sum1<<sum2<<endl;
            int ans = toSum + (r -l +1)*k - sum2 + sum1;
            if(ans%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}