#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int balance = 0;

    for (int i = 1; i + 1 < n; i++) {
        if (s[i] == '(')
            balance++;
        else
            balance--;

        if (balance < 0) {
            cout << "YES\n";
            return;
        }
    }

    if (balance == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
