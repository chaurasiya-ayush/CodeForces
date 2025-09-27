#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n), brr(n);
        for (int &elem : arr) cin >> elem;
        for (int &elem : brr) cin >> elem;

        int l = 1, r = n;
        for (int i = 0; i < n; i++) {
            if (arr[i] != brr[i]) {
                l = i ; 
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] != brr[i]) {
                r = i; 
                break;
            }
        }
        while(l>0 &&  brr[l-1] <= brr[l] ){
            l--;
        }
        while(r<n-1 && brr[r] <= brr[r+1]){
            r++;
        }
        cout << l+1 << " " << r+1 << "\n";
    }
    return 0;
}

