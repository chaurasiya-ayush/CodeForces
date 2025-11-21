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

        if(n % 2 == 1) {
            cout << 0 << "\n";  
        } else {
            cout << (n/4 + 1) << "\n";  
        }
    }
}