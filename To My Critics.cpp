#include<bits/stdc++.h>
using namespace std;
int   myCritics(){
    vector<int>arr(3);
   for (int &x : arr) {
        cin >> x;
    }
    sort(arr.begin(),arr.end());
    if((arr[2]+arr[1])>= 10) return 1;
    else return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(myCritics()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}