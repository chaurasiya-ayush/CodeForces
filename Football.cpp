#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   unordered_map<string,int>freq;
   vector<string>arr(n);
   int maxVal = INT_MIN;
   string ans;
   for(auto &elem:arr){
       cin>>elem;
   }  
     for(auto elem:arr){
          freq[elem]++;
          int value = freq[elem];
          if(value >maxVal){
              maxVal = value;
              ans = elem;
          }
     }
   
   cout<<ans;
}
