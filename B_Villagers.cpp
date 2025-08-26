#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       long long sum =0;
       vector<int>arr(n);
       for(int &elem:arr) cin>>elem;
       sort(arr.rbegin(),arr.rend());
       for(int i=0;i<n-1;i+=2){
           sum += max(arr[i],arr[i+1]);
       }
       if(n%2 != 0){
           sum += arr[n-1];
       }
       cout<<sum<<endl;
   }
   
}