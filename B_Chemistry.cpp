#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++){
          freq[str[i]]++;
          if( freq[str[i]] >1 ){
              freq.erase(str[i]);
          }
        }
      
        int count = freq.size();
        
        if(count - k < 0 ) cout<<"YES"<<endl;
        else {
            if((count - k)>1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}