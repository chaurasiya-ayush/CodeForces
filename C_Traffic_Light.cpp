#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		char ch;
		cin>>n>>ch;
		string str;
		cin>>str;
		str = str + str;
		int ans = 0;
		int storeIndex = INT_MAX;
		for(int i=2*n-1; i>=0; i--) {
			if(str[i]=='g') {
				storeIndex = i;
			} else if (str[i] == ch && i < n) {
				ans = max(ans, storeIndex - i);
			}
		}
		cout<<ans<<endl;
	}
}