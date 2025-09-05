#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (s.size() >= 3 && s[0] == '1' && s[1] == '0' && s[2] != '0') {
            int num = stoi(s.substr(2));
            if (num >= 2) {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
    return 0;
}
