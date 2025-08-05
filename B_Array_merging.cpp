#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        unordered_map<int,int>freq;
        unordered_map<int,int>freq2;
        for(int &elem:a) cin>>elem;
        for(int &elem:b) cin>>elem;
        for(int i=0;i<n;i++){
            int index = i;
            int cnt =1;
           while(i<n-1 && a[i]==a[i+1]){
               cnt++;i++;
           }
           freq[a[index]]=max(cnt,freq[a[index]]);
        }
        for(int i=0;i<n;i++){
            int index = i;
            int cnt =1;
           while(i<n-1 && b[i]==b[i+1]){
               cnt++;i++;
           }
           freq2[b[index]]=max(cnt,freq2[b[index]]);
        }
        int maxAns = INT_MIN;
        
        for(int i=0;i<n;i++){
            maxAns = max(freq[a[i]] + freq2[a[i]],maxAns);
        }
        for(int i=0;i<n;i++){
            maxAns = max(freq[b[i]] + freq2[b[i]],maxAns);
        }
        cout<<maxAns<<endl;
    }
}