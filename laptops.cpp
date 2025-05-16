#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    _Bool condition1 = false;
    _Bool condition2 = false;
    vector<pair<int,int>>laptop(n);
    for(int i=0;i<n;i++){
        cin>>laptop[i].first>> laptop[i].second;
    }
    for(int i=0;i<n;i++){
        if(laptop[i].first > laptop[i].second) condition1 = true;
        else if(laptop[i].first < laptop[i].second) condition2 = true;
        if(condition1 && condition2){ cout<<"Happy Alex"<<endl; return 0;}
    }
    cout<<"Poor Alex"<<endl;
    return 0;
   
}