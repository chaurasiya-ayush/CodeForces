#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;++i) cin >> v[i];
        vector<int> diff(n);
        for(int i=0;i<n;++i) {
            diff[i] =  2 * (i + 1) - v[i];
        }

        int curSum = 0, mxSum = 0;
        for(int i=0;i<n;++i) {
            curSum += diff[i];
            if(curSum < 0) curSum = 0;
            mxSum = max(mxSum, curSum);
        }

        cout << accumulate(v.begin(), v.end(), 0ll) + mxSum << endl;
    }
}