#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int m=0;
    int sum2=0;
    int sum =0;
    vector<int>arr(12);
    for(int i=0;i<12;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr.begin(),arr.end());
    if(sum<k) cout<<"-1"<<"\n";
    else if(k==0) cout<<"0"<<"\n";
    else{
        for(int i=11;i>=0;i--){
            sum2 += arr[i];
            if(sum2>=k){
                m = i;
                break;
            }
        }
        cout<<12-m<<"\n";
    }
}