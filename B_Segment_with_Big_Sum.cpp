#include<bits/stdc++.h>
using namespace std;
int checkSegment(vector<int>&arr,long long x){
    long long sum =0;
   
    int n = arr.size();
    int minVal =INT_MAX;
    int p1 =0;
    int p2 = 0;
    while(p2<n && p1<n){
        if(sum+arr[p2] >= x ){
        minVal = min(minVal,p2-p1+1);
            // cout<<p1<<" "<<p2<<endl;
            sum -= arr[p1];
            p1++;
        }else{
            sum += arr[p2];
            p2++;
        }
    }
    if(minVal == INT_MAX) return -1;
    return minVal;
}
int main(){
    int n;
    long long x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int& elem:arr){
       cin>>elem; 
    }
    cout<<checkSegment(arr,x)<<endl;
}