#include <bits/stdc++.h>
using namespace std;

long long xorUpto(long long n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long ans = xorUpto(b) ^ xorUpto(a - 1);
    cout << ans;
}
