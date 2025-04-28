#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int sum=0;
    cin>>n>>m;
    int count=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    
    sort(arr.begin(),arr.end());
     for(int i=0;i<n;i++){
         if(arr[i]<0 && count<m){
            sum += -1*arr[i];
            count++;
        }
    }
    cout<<(sum);
}