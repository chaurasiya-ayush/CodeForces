#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int one=0,two=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) one++;
        else two++;
    }
    if(one>=1 && two >=1){
        cout<<2<<" "<<1<<" ";
        one--;
        two--;
    }
    for(int i=0;i<two;i++){
        cout<<2<<" ";
    }
    for(int i=0;i<one;i++){
        cout<<1<<" ";
    }
    
}