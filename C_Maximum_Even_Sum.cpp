#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long ans;
        if(a%2==0 && b%2==0){
           long long val1 = a*(b/2);
            long long val2 = b/(b/2);
            if((val1%2==0 && val2%2==0 ) || (val1%2!=0 && val2%2!=0 ))
             ans = a*(b/2) + b/(b/2);
            else{
                ans = -1;
            }
        }
        else if(a%2==0 && b%2!=0){
            ans = -1;
        }else if(a%2!=0 && b%2!= 0){
             ans = a*(b) + 1;
        }else{
            long long val1 = a*(b/2);
            long long val2 = b/(b/2);
            if((val1%2==0 && val2%2==0 ) || (val1%2!=0 && val2%2!=0 ))
             ans = a*(b/2) + b/(b/2);
            else{
                ans = -1;
            }
        }
        cout<<ans<<endl;
    }
}