#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, C;
    cin >> N >> C;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 0;

    for (int iter = 0; iter < N; iter++) {
        sort(A.begin(), A.end());

        int p = 0;
        for (int i = 0; i < (int)A.size(); i++) {
            if (A[i] <= C) {
                p = i; 
            }
        }

        if (A[p] > C) {
            ans++;
        }

        vector<long long> B;
        for (int i = 0; i < (int)A.size(); i++) {
            if (i == p) continue;
            B.push_back(A[i] * 2);
        }

        A = B;
    }

    cout << ans << "\n";
}

int main() {
       int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
