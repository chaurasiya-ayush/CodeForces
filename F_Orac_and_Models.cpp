#include <iostream>
using namespace std;
int main() {
    int t;
	cin >> t;
	while(t--) {
        int n;
        cin >> n;
        int a[n + 1], f[n + 1];
		for(int i = 1; i <= n; ++i) cin >> a[i];
		for(int i = 1; i <= n; ++i) f[i] = 1;
		for(int i = 1; i <= n; ++i) 
			for(int j = i * 2; j <= n; j += i)
				if(a[i] < a[j])
					f[j] = max(f[j], f[i] + 1);
		int ans = 0;
		for(int i = 1; i <= n; ++i)
			ans = max(ans, f[i]);
		cout << ans << endl;
	}
}