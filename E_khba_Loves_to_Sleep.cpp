#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    
    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        vector<long long> a(n);
        for (auto &it : a) cin >> it;
        
        sort(a.begin(), a.end());
        set<long long> used(a.begin(), a.end());
        
        vector<long long> result;
        for (long long pos = 0; pos <= x && result.size() < k; pos++) {
            if (!used.count(pos))
                result.push_back(pos);
        }

        for (auto val : result) cout << val << " ";
        cout << "\n";
    }
}
