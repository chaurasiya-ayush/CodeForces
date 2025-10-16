#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int &elem:arr) cin>>elem;
        for(int i=0;i<n;i++){
            arr[i] = arr[i] + i +1;
        }
        sort(arr.begin(),arr.end());
        int l = 0;
        int cnt =0;
        while(l<n && (k - arr[l] >=0)){
            k = k - arr[l];
            l++;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}