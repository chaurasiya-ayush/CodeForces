#include <bits/stdc++.h>
using namespace std;

bool isValid(string &s, int A, int B, int C) {
    int bal = 0;
    for (char ch : s) {
        if (ch == 'A') bal += (A ? 1 : -1);
        if (ch == 'B') bal += (B ? 1 : -1);
        if (ch == 'C') bal += (C ? 1 : -1);

        if (bal < 0) return false; 
    }
    return bal == 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        bool ok = false;
        for (int A = 0; A < 2; A++) {
            for (int B = 0; B < 2; B++) {
                for (int C = 0; C < 2; C++) {
                    if (isValid(s, A, B, C)) {
                        ok = true;
                    }
                }
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
