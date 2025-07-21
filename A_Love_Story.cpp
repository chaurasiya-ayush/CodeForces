#include <iostream>
using namespace std;

void solve() {
    string target = "codeforces";
    string s;
    cin >> s;
    int diff = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] != target[i]) diff++;
    }
    cout << diff << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
