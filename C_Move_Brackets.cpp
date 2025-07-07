#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> stk;
        int count = 0;

        for (char ch : s) {
            if (ch == '(') {
                stk.push(ch);
            } else { 
                if (!stk.empty() && stk.top() == '(') {
                    stk.pop();
                } else {
                    count++;
                }
            }
        }


        cout << count << endl;
    }
    return 0;
}
