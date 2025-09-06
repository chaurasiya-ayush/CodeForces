#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        long long n;
        cin>>n;
        vector<long long> ans;

        long long p= 1;
        for(int i=1; i<=18; i++){
             p *= 10;                 
            long long deno = 1 + p;   
            if(n%deno == 0){
                long long x = n/deno;
                ans.push_back(x);
            }
        }

        if(ans.size() != 0){
            cout<<ans.size()<<endl;
            sort(ans.begin(), ans.end());
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i] << " ";
            }
            cout<<endl;
        }
        else{
            cout<<0<<endl;
        }




        t--;
    }
}