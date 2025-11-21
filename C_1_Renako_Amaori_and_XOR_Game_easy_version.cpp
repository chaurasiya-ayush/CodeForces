
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int &elem:a) cin>>elem;
        vector<int>b(n);
        for(int &elem:b) cin>>elem;
        int maiCnt =0;
        int aliCnt =0;
        int aOne =0;
        int bOne =0;
        for(int i=0;i<n;i++){
            if(a[i] == 1) aOne++;
            if(b[i] == 1)  bOne++;
        }
        if(aOne%2 == bOne%2){
            cout<<"Tie"<<endl;
            continue;
        }
        
        int index =-1;
        for(int i= n-1;i>=0;i--){
            if(a[i] != b[i]){
                index = i+1;
                break;
            }
        }
        // cout<<index<<endl;
        if(index == -1){
           cout<<"Tie"<<endl; 
        }
        else if(index %2==0){
            cout<<"Mai"<<endl;
        }else {
            cout<<"Ajisai"<<endl;
        }
    }
}