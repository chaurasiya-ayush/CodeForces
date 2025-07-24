#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int &elem:arr)cin>>elem;
    sort(arr.begin(),arr.end());
    if(k==0 && arr[0]==1) cout<<-1<<endl;
    else if(k==0) cout<<1<<endl;
    else if(arr[k-1] == arr[k])cout<<-1<<endl;
    else cout<<arr[k-1]<<endl;
    
}