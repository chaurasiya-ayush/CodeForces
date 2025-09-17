#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int &elem:arr) cin>>elem;
        int cnt =0;
        if(arr[0] > arr[1]){
            cnt++;
        }
        if(arr[n-1] > arr[n-2]){
            cnt++;
        }
        for(int i=1;i<n-1;i++){
            if(arr[i+1] < arr[i] && arr[i-1] < arr[i]){
                cnt++;
            }
        }
        if(cnt<=1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}