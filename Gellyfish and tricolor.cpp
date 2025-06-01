#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b <= a && b <= c) {
            cout << "Gellyfish" << endl;
        } else if (a < d) {
            cout << "Flower" << endl;
        } else if (d <= c) {
            cout << "Gellyfish" << endl;
        } else {
            cout << "Flower" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
