#include <bits/stdc++.h>
using namespace std;

string recipe;
long long nb, ns, nc;
long long pb, ps, pc;
long long r;
long long reqB, reqS, reqC;

bool canMake(long long x) {
    long long needB = max(0LL, reqB * x - nb);
    long long needS = max(0LL, reqS * x - ns);
    long long needC = max(0LL, reqC * x - nc);

    long long cost = needB * pb + needS * ps + needC * pc;
    return cost <= r;
}

int main() {
    cin >> recipe;

    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    reqB = reqS = reqC = 0;
    for (char ch : recipe) {
        if (ch == 'B') reqB++;
        else if (ch == 'S') reqS++;
        else if (ch == 'C') reqC++;
    }

    long long lo = 0, hi = 10000000000000, ans = 0;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (canMake(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
