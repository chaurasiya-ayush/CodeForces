#include<bits/stdc++.h>
using namespace std;
int checkSegment(vector<int>&arr,long long x){
    long long sum =0;
   
    int n = arr.size();
    int maxVal =INT_MIN;
    int p1 =0;
    int p2 = 0;
    while(p2<n && p1<n){
        if(sum+arr[p2] >= x ){
            sum -= arr[p1];
            p1++;
        }else{
        maxVal = max(maxVal,p2-p1+1);
            sum += arr[p2];
            p2++;
        }
    }
    if(maxVal == INT_MIN) return 0;
    return maxVal;
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