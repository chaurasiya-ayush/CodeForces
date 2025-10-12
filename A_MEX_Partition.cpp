#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr) cin >> x;
 
        unordered_set<int> present(arr.begin(), arr.end());
 
        int mex = 0;
        while (present.count(mex)) mex++;
 
        cout << mex << '\n';
    }
 
    return 0;
}
