#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            int temp = x;
            x = y;
            y = temp;
        }
        cout<<x<<" "<<y<<endl;
    }
}