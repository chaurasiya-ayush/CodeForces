#include<bits/stdc++.h>
using namespace std;
string s;
int i, w;
 
int main() {
	cin >> s;
	for (i = 0; i < s.size(); i++) if (s[i] == '4' || s[i] == '7') w++;
	if (w == 4 || w == 7) cout << "YES\n"; else cout << "NO\n";
	return 0;
}