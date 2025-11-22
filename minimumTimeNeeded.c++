#include<bits/stdc++.h>
using namespace std;

bool check(long long x, vector<int>& arr, long long t){
    long long sum = 0;
    for(int a : arr){
        sum += x / a;
        if(sum >= t) return true;   
    }
    return sum >= t;
}

int main(){
    long long n, t;
    cin >> n >> t;

    vector<int> arr(n);
    for(int &x : arr) cin >> x;

    long long left = 1;
    long long right = *min_element(arr.begin(), arr.end()) * t; 
    long long ans = right;

    while(left <= right){
        long long mid = left + (right-left)/2;

        if(check(mid, arr, t)){
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << endl;
}
