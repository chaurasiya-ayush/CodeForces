#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

 
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
    }

    int m;
    cin >> m;
    while (m--) {
        int q;
        cin >> q;

        int left = 0, right = n - 1;
        int idx = n; 

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (a[mid] >= q) {
                idx = mid;      
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        }

        cout << idx + 1 << '\n'; 
    }

    return 0;
}