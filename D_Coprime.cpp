#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> idx(1001, -1); 
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            idx[x] = i + 1;  
        }

        int ans = -1;
        for (int i = 1; i <= 1000; i++) {
            for (int j = i; j <= 1000; j++) {
                if (idx[i] != -1 && idx[j] != -1 && gcd(i, j) == 1) {
                    ans = max(ans, idx[i] + idx[j]);
                }
            }
        }

        cout << ans << "\n";
    }
}
