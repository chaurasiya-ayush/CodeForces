#include<bits/stdc++.h>
using namespace std;
int main(){
    long long w,h,n;
    cin>>w>>h>>n;
    long long left = 0;
    long long right = (1LL * max(w,h)*n);
    long long  ans =right;
    while(left+1 < right){
        long long m = left + (right-left)/2;
        // (((m/h)*(m/w)) > n)
       long long a = m/h;
       long long b = m/w;
        if (a > 0 && b > 0 && (a >= (n + b - 1) / b)) {
            ans = m;
            right = m;
        }else{
            left = m;
        }
    }
    cout<<fixed<<setprecision(10);
    cout<<ans<<endl;
}