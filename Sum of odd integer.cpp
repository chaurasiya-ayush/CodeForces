#include<bits/stdc++.h>
using namespace std;
int sumOddInteger(){
   long long int n,k;
   cin>>n>>k;
   if(n<k*k) return 0;
   if(n%2==0 && k%2!=0) return 0;
   if(n%2!= 0 && k%2==0) return 0;
   return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(sumOddInteger()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}