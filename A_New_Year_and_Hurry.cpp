#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int timeLeft = 240 - k;  // remaining time
    int res = 0;

    for (int i = 1; i <= n; i++) {
        int required = 5 * i;
        if (timeLeft >= required) {
            timeLeft -= required;
            res++;
        } else {
            break; // no more time
        }
    }

    cout << res << endl;
    return 0;
}
