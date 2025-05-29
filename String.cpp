#include <iostream>
using namespace std;

int countBlocksOfOnes(const string& s) {
    int count = 0;
    bool inBlock = false;

    for (char c : s) {
        if (c == '1') {
            if (!inBlock) {
                count++;
                inBlock = true;
            }
        } else {
            inBlock = false;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << countBlocksOfOnes(s) << endl;
    }

    return 0;
}
