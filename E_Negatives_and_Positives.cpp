#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int &elem:arr) cin>>elem;
        int cnt =0;
        int minVal = INT_MAX;
        for(int i=0;i<n;i++){
            if( arr[i] < 0){
                cnt++;
            }
            minVal = min(minVal,abs(arr[i]));
        }
        long long  sum =0;
        for(int elem:arr) sum += abs(elem);
        if(cnt %2 !=0){
            sum  = sum - 2*(minVal);
        }
         cout<<sum<<endl;
    }
}