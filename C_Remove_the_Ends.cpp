#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solveOneTest() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> prefix(n + 1, 0); // prefix[i] = sum of positives in first i elements
    vector<long long> suffix(n + 1, 0); // suffix[i] = sum of negatives (as positives) from i to end

    // Build prefix sums
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + max(0, a[i]);
    }

    // Build suffix sums
    for (int i = n - 1; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + max(0, -a[i]);
    }

    // Try all split points
    long long best = 0;
    for (int i = 0; i <= n; i++) {
        best = max(best, prefix[i] + suffix[i]);
    }

    cout << best << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solveOneTest();
    }
    return 0;
}
