#include<bits/stdc++.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         string a;
         string b;
         cin>>a;
         cin>>b;
         int maxVal = INT_MIN;
         for(int i=0;i<a.size();i++){
             string val = "";
             for(int j=1;j<=a.size()-i ;j++){
                   val = a.substr(i, j);
                if (b.find(val) != string::npos) {
                        // cout<<val<<endl;
                        maxVal = max(maxVal,(int)val.size());
                    }
             }
         }
         cout<<maxVal<<endl;
     }
 }