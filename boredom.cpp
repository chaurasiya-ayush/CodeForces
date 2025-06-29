#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;

int main() {
    int n;
    cin >> n;
    vector<long long> freq(MAX, 0);

    int x, maxVal = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        freq[x]++;
        maxVal = max(maxVal, x);
    }

    vector<long long> dp(MAX, 0);
    dp[1] = freq[1] * 1;

    for (int i = 2; i <= maxVal; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + freq[i] * i);
    }

    cout << dp[maxVal] << endl;
    return 0;
}
