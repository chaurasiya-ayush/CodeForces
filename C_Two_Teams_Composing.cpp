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
        unordered_map<int,int>freq;
        unordered_set<int>st;
        int maxVal = INT_MIN;
        int val = arr[0];
        for(int i=0;i<n;i++){
            int x = arr[i];
            freq[x]++;
            if(freq[x] > maxVal){
                maxVal = freq[x];
                val = arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i] != val){
                st.insert(arr[i]);
            }
        }
        int ans = min((int)freq[val],(int)st.size());
        if(((int)freq[val] - (int)st.size())>= 2 ){
            ans = ans+1;
        }
        cout<<ans<<endl;
    }
}