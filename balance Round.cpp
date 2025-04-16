#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int count = 0, max_count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] <= k) {
                count++;
            } else {
                max_count = max(max_count, count);
                count = 0;
            }
        }

        max_count = max(max_count, count);
        cout << n - (max_count + 1 )<< "\n";
    }

    return 0;
}
