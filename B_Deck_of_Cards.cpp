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
    //   int i=0;int j=n-1;
      vector<char>arr(n,'+');
      int i=0;
      int j = n-1;
      int cnt =0;
      for(int l=0;l<k;l++){
          if(str[l]=='0'){
              arr[i]='-';
              i++;
          }else if(str[l] == '1'){
              arr[j] = '-';
              j--;
          }else{
              cnt++;
          }
          
      }
      while(cnt >0 ){
          if(i==j){
              if(arr[i-1]=='?' && arr[j+1]=='?'){
                  arr[i] = '?';
              }else{
                  arr[i] = '-';
              }
          }
          else{
              arr[i] = '?';
              arr[j] = '?';
          }
          cnt--;
          i++;
          j--;
      }
      for(auto elem:arr)cout<<elem;
      cout<<endl;
       
    }
    
}