#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int &elem:arr)cin>>elem;
        sort(arr.rbegin(),arr.rend());
        for(int elem:arr){
            cout<<elem<<" ";
        }cout<<endl;
    }
}