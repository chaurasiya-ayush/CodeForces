#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    int ans[2] = {0, 0};

    for (int i = 0; i < n; i++) {
        if (a[l] > a[r]) {
            ans[i % 2] += a[l++];
        } else {
            ans[i % 2] += a[r--];
        }
    }

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
