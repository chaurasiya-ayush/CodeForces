#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s ;
        cin>>s;
        int q;
        cin>>q;
        string str;
        string name;
        cin>>str;
        cin>>name;
        for(int i=0;i<q;i++){
            if(name[i] == 'D'){
                s = s + str[i];
            }else{
                s =  str[i] + s;
            }
        }
        cout<<s<<endl;
    }
}