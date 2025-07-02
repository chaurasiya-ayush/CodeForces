#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, j , k;
        cin >> n >> j >> k;
        vector<int>arr(n);
        for(auto &i : arr) cin >> i;
        if(k > 1) {
            cout << "YES\n";
        } else {
            int maxi = *max_element(arr.begin(), arr.end());
            if(arr[j-1] == maxi) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}