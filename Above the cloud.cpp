
#include<bits/stdc++.h>
using namespace std;
string cloudKeUpar(){
   int n;
   cin>>n;
   string str;
   cin>>str;
    unordered_map<char,int>freq;
   for(int i=1;i<n-1;i++){
       if(str[i] == str[0])  return "YES";
   }
   for(int i=1;i<n-1;i++){
       if(str[i] == str[n-1])  return "YES";
   }
   for(int i=1;i<n-1;i++){
     freq[str[i]]++;
   }
   for(int i=1;i<n-1;i++){
    if(freq[str[i]]>1)return "YES";
   }
   return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
      cout<<cloudKeUpar()<<endl; 
    }
}