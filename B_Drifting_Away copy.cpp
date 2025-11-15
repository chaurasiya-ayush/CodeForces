#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        int starc = 0;
        int leftc = 0;
        int rightc = 0;
        bool ch = false;
        for(int i=0;i<n;++i) {
            if(s[i] == '*') starc++;
            else if(s[i] == '<') leftc++;
            else rightc++;
            if(i && s[i-1] == '>' && s[i] != '>') {
                ch = true;
                break;
            }
            if(i!= n- 1 && s[i + 1] == '<' && s[i] != '<') {
                ch = true;
                break;
            }
        }
        if(starc > 1) {
            ch = true;
        }
        if(ch) {
            cout << -1 << endl;
            continue;
        }
        cout << max(leftc, rightc) + starc << endl;
    }
}