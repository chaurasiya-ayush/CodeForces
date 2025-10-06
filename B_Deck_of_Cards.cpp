#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (n == 1) {
            cout << "-\n";
            continue;
        }

        int minTop = 0, maxTop = 0;
        int minBot = 0, maxBot = 0;

        for (char c : s) {
            if (c == '0') {            
                minTop++;
                maxTop++;
            } else if (c == '1') {     
                minBot++;
                maxBot++;
            } else {                   
                maxTop++;
                maxBot++;
            }
        }

        string result(n, '+');
        for (int i = 1; i <= n; i++) {
            if (i <= minTop || i > n - minBot)
                result[i - 1] = '-';
            else if (i <= maxTop || i > n - maxBot)
                result[i - 1] = '?';
        }

        cout << result << '\n';
    }
}
