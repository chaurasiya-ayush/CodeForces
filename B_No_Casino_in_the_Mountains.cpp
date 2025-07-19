#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int count =0;
    int cnt =0;
    bool flag = true;
    vector<int>arr(n);
    for(auto &elem :arr) cin>>elem;
    for(int i=0;i<n;i++){
        flag = true;
        count = 0;
        for(int j =i;count<k;j++){
            if(arr[j] == 1){
                flag = false;
                break;
            }
            count ++;
        }
        if(flag){
            cnt++;
            i+=k;
        }
    }
    cout<<cnt<<endl;
    }
}