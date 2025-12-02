

#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define loop1(i,n) for(int i=1;i<=n;i++)
#define scan(x) cin>>x

int *a;
int n, m;

int valueFenwick(int cs) {
    if (cs <= 0) return cs;
    int ans = 0;
    while (cs > 0) {
        ans += a[cs];
        cs -= (cs & -cs);
    }
    return ans;
}

int main() {

    string s;
    getline(cin, s);

    n = s.length();
    a = new int[n + 3];

    loop1(i, n) a[i] = 0;

    // Build Fenwick Tree
    loop1(i, n - 1) {
        if (s[i] == s[i - 1]) {
            int j = i;
            while (j <= n) {
                a[j]++;
                j += (j & -j);
            }
        }
    }

    scan(m);
    int u, v;

    loop1(i, m) {
        scan(u); 
        scan(v);
        u--; v--;
        cout << valueFenwick(v) - valueFenwick(u) << "\n";
    }

    delete[] a;
    return 0;
}
