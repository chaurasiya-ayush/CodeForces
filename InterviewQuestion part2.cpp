#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<vector<int>>arr(3,vector<int>(4));
  int n = 3,m=4;
  int k=1;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          arr[i][j]=k;
          k++;
      }
  }
  arr[1][3] = 0;
  arr[2][2] = 0;
  
  vector<int>row(n,1);
  vector<int>col(m,1);
 
  
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         if(arr[i][j]==0){
             row[i] = 0;
             col[j] = 0;
         }
      }
      
  }
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(row[i]==0 || col[j]==0){
              arr[i][j]=0;
          }
      }
  }
  
  // printing 
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }
}