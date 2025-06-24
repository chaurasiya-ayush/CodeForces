#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long sum =0;
        while(a!=0 && b!=0){
            if(a>b){
                int temp = a;
                a = b;
                b = temp;
            }
            sum += b/a;
            b = b%a;
        }
        cout<<sum<<endl;
    }
}