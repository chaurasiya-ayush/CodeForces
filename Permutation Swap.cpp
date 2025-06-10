#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0)return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int permutationSwap(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &x:arr){
        cin>>x;
    }
    int k= abs(arr[0]-1);
    for(int i=1;i<n;i++){
        k = gcd(k,abs(arr[i]-(i+1)));
    }
    return k;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<permutationSwap()<<endl;
    }
}