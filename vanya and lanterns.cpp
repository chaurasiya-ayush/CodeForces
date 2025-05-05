#include<bits/stdc++.h>
using namespace std;
double vanyaKiLantern(vector<int>&arr,int length){
    double diff=0,maxlen=INT_MIN;
    int n = arr.size();
    for(int i=0;i<arr.size()-1;i++){
        diff = arr[i+1]-arr[i];
        maxlen = (diff>maxlen)? diff:maxlen;
    }
    
    double zero = arr[0] - 0;
    double last = length- arr[n-1];
    double  result = max(zero,max(last,maxlen/2.0));
    
    return result;
}
int main(){
    int noOfLantern, lengthOfStreet;
    cin>>noOfLantern>>lengthOfStreet;
    vector<int>arr(noOfLantern);
    for(int i=0;i<noOfLantern;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout << fixed << setprecision(10) << vanyaKiLantern(arr,lengthOfStreet) << endl;
}