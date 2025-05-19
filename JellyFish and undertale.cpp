#include<bits/stdc++.h>
using namespace std;

long long jellyFishUndertail() {
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }

    long long val = b;  
    for (int i = 0; i < n; i++) {
        val += min(arr[i], a-1);
    }

    return val;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << jellyFishUndertail() << endl;
    }
}
