  #include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int d = x[i] - '0';
        int inverted = 9 - d;

        // If it's the first digit, don't make it 0
        if (i == 0 && inverted == 0) continue;

        // Replace if inverted is smaller
        if (inverted < d)
            x[i] = inverted + '0';
    }

    cout << x << endl;
    return 0;
}
