#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
      string str;
      cin>>str;
      int count_zero =0;
      int count_one = 0;
      int t =0;
      for(int i=0;i<str.size();i++){
          if(str[i]=='0') count_zero++;
          else count_one++;
      }
      for(int i=0;i<str.size();i++){
          if(str[i]=='0' && count_one >0){
              count_one--;t++;
          }
          else if(str[i] == '1' && count_zero >0){
              count_zero--;t++;
          }
          else{
              break;
          }
      }
      cout<<str.size()-t<<endl;
  }
    
}