#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int sum=a;
        int c = a;
    while(a != 0){
        sum += c/b;
        c = c/b + c%b;
        a = a/b;
    }
    cout<<sum<<endl;
}