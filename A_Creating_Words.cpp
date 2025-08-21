#include <bits/stdc++.h>
using namespace std;

void solve() {
    string A, B;
    cin >> A >> B;
    swap(A[0], B[0]);
    cout << A << " " << B << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}
