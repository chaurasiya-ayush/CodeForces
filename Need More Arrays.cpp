#include<bits/stdc++.h>
using namespace std;
void needMore(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &x:arr){
       cin>>x; 
    }
    int count =0;
    int sum =-1;
    for(int i=0;i<n;i++){
        if(sum +1 <arr[i]){
            sum = arr[i];
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        needMore();
    }
}