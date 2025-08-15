#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N;
    long long X, Y;
    cin >> N >> X >> Y;
    vector<long long> A(N);
    for (auto &a : A) cin >> a;

    long long sum_all = accumulate(A.begin(), A.end(), 0LL);
    long long low = sum_all - Y;  // min sum of the pair
    long long high = sum_all - X; // max sum of the pair

    sort(A.begin(), A.end());

    long long ans = 0;

    for (int i = 0; i < N; i++) {
        long long L = low - A[i];
        long long R = high - A[i];

        // Find first index where A[j] >= L
        auto it1 = lower_bound(A.begin(), A.end(), L);
        // Find first index where A[j] > R
        auto it2 = upper_bound(A.begin(), A.end(), R);

        // Count valid elements excluding i itself
        long long cnt = it2 - it1;
        if (A[i] >= L && A[i] <= R) cnt--;

        ans += cnt;
    }

    cout << ans / 2 << "\n"; // each pair counted twice
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;
    while (tests--) run_case();
}
