#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int count = 0;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            int j = x / i;
            if (i <= n && j <= n) {
                if (i == j)
                    count += 1; 
                else
                    count += 2; 
            }
        }
    }

    cout << count << endl;
    return 0;
}
