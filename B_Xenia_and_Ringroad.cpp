#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(m);
    for(int &elem:arr) cin>>elem;
    long long sum = arr[0]-1;
    for(int i=0;i<m-1;i++){
        if(arr[i] <= arr[i+1]) sum += arr[i+1] - arr[i];
        else {
            sum += n - arr[i] + arr[i+1];
        }
    }
    cout<<sum<<endl;
}