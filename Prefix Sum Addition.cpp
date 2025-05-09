#include <bits/stdc++.h>
using namespace std;


bool isValidPrefixSum() {
    int n, k;
    cin >> n >> k;

    vector<long long> prefix(k);  
    for (int i = 0; i < k; i++) {
        cin >> prefix[i];
    }

   
    if (k == 1) {
        return true;
    }

   
    vector<long long> diffs(k - 1);
    for (int i = 1; i < k; i++) {
        diffs[i - 1] = prefix[i] - prefix[i - 1];
    }

   
    for (int i = 1; i < k - 1; i++) {
        if (diffs[i] < diffs[i - 1]) {
            return false;
        }
    }

    
    long long minValue = diffs[0];
    long long requiredSum = (n - k + 1) * minValue;

    return requiredSum >= prefix[0];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        if (isValidPrefixSum()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}