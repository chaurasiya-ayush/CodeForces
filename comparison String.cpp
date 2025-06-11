#include<bits/stdc++.h>
using namespace std;
int comparisonString(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int countLeft=0,countRight=0,maxLeftCount = INT_MIN,maxRightCount = INT_MIN;
    for(int i=0;i<str.size();i++){
        if(str[i]=='<'){
            countLeft++;
            maxLeftCount = max(maxLeftCount,countLeft);
        }
        else{
            countLeft =0;
        }
    }
    for(int i=0;i<str.size();i++){
        if(str[i]=='>'){
            countRight++;
            maxRightCount = max(maxRightCount,countRight);
        }
        else{
            countRight =0;
        }
    }
    int maxNum = max(maxLeftCount,maxRightCount)+1;
    return maxNum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<comparisonString()<<endl;
    }
}