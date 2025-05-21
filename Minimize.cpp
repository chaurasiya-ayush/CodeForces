#include<bits/stdc++.h>
using namespace std;
int minimize(){
    int a,b;
    cin>>a>>b;
    int minValue = INT_MAX;
    for(int i=a;i<=b;i++){
        int val = (i-a)+(b-i);
        minValue = min(val,minValue);
    }
    return minValue;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<minimize()<<endl;
    }
}