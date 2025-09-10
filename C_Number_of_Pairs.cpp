#include <bits/stdc++.h>
using namespace std;

long long countPairs(vector<int>& arr, int X) {
    int n = arr.size();
    int left = 0, right = n-1;
    long long cnt = 0;
    while (left < right) {
        if (arr[left] + arr[right] <= X) {
            cnt += (right - left);
            left++;
        } else {
            right--;
        }
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> arr(n);
        for (int &elem : arr) cin >> elem;
        sort(arr.begin(), arr.end());

        long long ans = countPairs(arr, r) - countPairs(arr, l - 1);
        cout << ans << "\n";
    }
}
