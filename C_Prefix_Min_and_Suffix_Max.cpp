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
        vector<int>preSum(n);
        vector<int>sufSum(n);
        int minVal = INT_MAX;
        int maxVal = INT_MIN;
        for(int i=0;i<n;i++){
            minVal = min(arr[i],minVal);
            maxVal = max(arr[n-i-1],maxVal);
            preSum[i]=minVal;
            sufSum[i] = maxVal;            
        }
        reverse(sufSum.begin(),sufSum.end());
        string ans = "";
        for(int i=0;i<n;i++){
            if(arr[i]>preSum[i] && arr[i]<sufSum[i]) ans = ans+"0";
            else ans = ans + "1";
        }
        cout<<ans<<endl;
    }
}