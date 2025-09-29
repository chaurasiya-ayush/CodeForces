#include <bits/stdc++.h>
using namespace std;

long long minCost(vector<int>& pos) {
   if(pos.size() ==0 ) return 0;
    int k = pos.size();
    vector<long long> q(k);
    for (int i = 0; i < k; i++) {
        q[i] = (long long)pos[i] - i;
    }
    sort(q.begin(), q.end());
    long long median = q[k / 2];
    long long cost = 0;
    for (int i = 0; i < k; i++) {
        cost += llabs(q[i] - median);
    }
    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> posA, posB;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') posA.push_back(i);
            else posB.push_back(i);
        }

        long long costA = minCost(posA);
        long long costB = minCost(posB); 

        cout << min(costA, costB) << "\n";
    }
    return 0;
}
