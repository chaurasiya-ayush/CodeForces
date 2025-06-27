#include<bits/stdc++.h>
using namespace std;
long long  sameDiff(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>freq;
    long long  ans = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i] = arr[i] - i;
        freq[arr[i]]++;
       
    }
    for(int i=0;i<n;i++){
        long long val = freq[arr[i]];
        ans += (val *(val-1))/2;
        freq[arr[i]] =0;
    }
    return ans;
    
}
int main(){
   int t;
   cin>>t;
   while(t--){
       cout<<sameDiff()<<endl;
   }
}
