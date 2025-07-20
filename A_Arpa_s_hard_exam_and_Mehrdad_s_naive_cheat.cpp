#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int last_digits[] = {6, 8, 4, 2};  // Pattern of last digits of powers of 2

    if (n == 0)
        cout << 1 << endl;  // By convention, 2^0 = 1
    else
        cout << last_digits[n % 4] << endl;

    return 0;
}
