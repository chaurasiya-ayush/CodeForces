#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr,long long h,long long maxVal){
    long long val = 0;
    for(int i=0;i<arr.size();i++){
        if( (long)h-arr[i] > 0){
            val += (long)(h -arr[i]);
    
        }
    }
    if(val > maxVal){
        return false;
    }else{
        return true;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans =0;
        int n , w;
        cin>>n>>w;
        vector<int>arr(n);
        for(int &elem:arr) cin>>elem;
        int left  = 1;
        long long right = *max_element(arr.begin(), arr.end()) + w;
        while(left<=right){
            long long mid = (left + right)/2;
            if(check(arr,mid,w)){
                ans  = mid;
                left = mid +1;
            }else{
                right = mid - 1;
            }
            // cout<<mid<<endl;
        }
        cout<<ans<<endl;

    }
}