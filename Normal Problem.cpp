#include <iostream>
#include <string>
using namespace std;

// Function to get the mirrored version of a character
char mirrorChar(char c) {
    if (c == 'p') return 'q';
    if (c == 'q') return 'p';
    return 'w'; // 'w' remains unchanged
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b = "";
        cin >> a;

        // Traverse the string in reverse and mirror each character
        for (int i = a.size() - 1; i >= 0; --i) {
            b += mirrorChar(a[i]);
        }

        cout << b << endl;
    }
    return 0;
}
