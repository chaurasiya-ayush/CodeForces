#include<bits/stdc++.h>
using namespace std;
string gamePlay(){
    string str;
    cin>>str;
   int one =0,zero =0 ;
   for(int i=0;i<str.size();i++){
       if(str[i]=='1') one++;
       else zero++;
   }
   int minValue = min(one,zero);
   if(minValue%2!=0) return "DA";
   else return "NET";
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       cout<<gamePlay()<<endl;  
    }
}