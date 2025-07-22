#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    unordered_map<string,string>freq;
    for(int i=0;i<m;i++){
        string str1;
        string str2;
        cin>>str1>>str2;
        freq.insert({str1,str2});
    }
    vector<string>st(n);
    for(int i=0;i<n;i++){
        cin>>st[i];
    }
    string word1;
    string word2;
    for(int i=0;i<n;i++){
        word1 = st[i];
        word2 = freq[st[i]];
        if(word1.size() <= word2.size()){
            st[i] = word1;
        }
        else{
            st[i] = word2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<st[i]<<" ";
    }
}