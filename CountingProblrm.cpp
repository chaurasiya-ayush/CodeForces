#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  

    while (n--) {
        int x;
        cin >> x;

        long long sum = 0;
        bool hasOdd = false;

        for (int i = 0; i < x; i++) {
            long long z;
            cin >> z;
            sum += z;

            if (z % 2 != 0) {
                hasOdd = true;
            }
        }

        if (sum % 2 == 0 && hasOdd) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
