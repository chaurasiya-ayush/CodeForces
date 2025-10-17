#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        bool flag=true;
        std::vector<int> v;
        for (int i=31;i>=0;i--) {
            if((a>>i)&1){
                break;
            }
            if((b>>i)&1){
                flag=false;
                break;
            }
        }
        if(flag==true){
            for(int i=0;i<32;i++){
                if((((a>>i)&1)==1) && (((b>>i)&1)==0)){
                    v.push_back(1<<i);
                }
                if((((a>>i)&1)==0) && (((b>>i)&1)==1)){
                    v.push_back(1<<i);
                }
                
            }
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
            if(v.size()!=0)cout<<endl;
        }
        else cout<<-1<<endl;
    }
}
