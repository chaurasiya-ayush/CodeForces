
#define loop(i, n) for(int i = 0; i < n; i++)
#define scan(x) cin >> x

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    scan(t);

    while(t--) {

        int n;
        scan(n);

        vector<long long> a(n);
        loop(i, n) scan(a[i]);
        long long first = a[0], last = a[n-1];

        if(first == -1 && last == -1) {
            first = last = 0;
        }
        else if(first == -1) {
            first = last; 
        }
        else if(last == -1) {
            last = first;
        }
  
        a[0] = first;
        a[n-1] = last;

        for(int i = 1; i < n-1; i++) {
            if(a[i] == -1) a[i] = 0;
        }

        long long ans = llabs(a[n-1] - a[0]);

        cout << ans << "\n";

        loop(i, n) cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
