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
        for(int i=1;i<n;i++){
            arr[i] += arr[i-1];
        }
        int maxVal = INT_MIN;
        for(int i =0;i<n;i++){
            for(int j=i;j<n;j++){
                int val =0;
                if(i!=0){
                     val = (arr[j]-arr[i-1])/(j-i+1);
                    
                }else{
                      val = (arr[j])/(j-i+1); 
                }
                maxVal = max(val,maxVal);
            }
        }
        cout<<maxVal<<endl;
    }
}