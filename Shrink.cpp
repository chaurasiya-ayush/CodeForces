#include <bits/stdc++.h>
using namespace std;
 
void solve(int n) {
    vector<int> res(n);
    int left = 0, right = n - 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            res[left++] = i;
        } else {
            res[right--] = i;
        }
    }
 
    for (int x : res) {
        cout << x << " ";
    }
    cout << "\n";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
}