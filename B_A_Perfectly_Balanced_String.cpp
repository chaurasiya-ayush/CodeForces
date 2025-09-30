#include<bits/stdc++.h>
using namespace std;
string perfectlyBalanced(string str){
    unordered_map<int,int>freq;
    unordered_map<int,int>freq1;
    int n = str.size();
    for(int elem :str){
        freq1[elem]++;
    }
    int size = freq1.size();
    vector<char>arr;
    for(int i=0;i<n;i++){
        if(freq.find(str[i]) == freq.end()){
            arr.push_back(str[i]);
            freq[str[i]]++;
        }else{
            break;
        }
    }
    // for(auto elem:arr) cout<<elem<<" ";
    if(freq.size() != size) return "NO";
    for(int i=0;i<n;){
        int j =0;
        while(i<n && j<size){
            if(arr[j] == str[i]){
                j++;
                i++;
            }else return "NO";
        }
    }
    return "YES";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
       cout<<perfectlyBalanced(str)<<endl;
    }
}