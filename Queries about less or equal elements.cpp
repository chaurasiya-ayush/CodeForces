#include<bits/stdc++.h>
using namespace std;
 
int arrKiDuniya(vector<int>& arr, int brr){
    int left = 0;
    int right = arr.size() - 1;
    int count = 0;
 
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] <= brr){
            count = mid + 1; 
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return count;
}
 
int main(){
    int a, b;
    cin >> a >> b;
 
    vector<int> arr(a);
    vector<int> brr(b);
 
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < b; i++){
        cin >> brr[i];
    }
 
    sort(arr.begin(), arr.end());
 
    for(int i = 0; i < b; i++){
        cout << arrKiDuniya(arr, brr[i]) << " ";
    }
}