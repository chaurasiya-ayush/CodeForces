//  Code by Ayush Chaurasiya — Keep Hustling 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define scan(x) cin >> x
#define print(x) cout << x 
#define loop(i, n) for(int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(){
    string t; cin >> t;
    if (t == "first") {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            cout << char(a + 'a' - 1);
        }
    } else {
        string s; cin >> s;
        cout << s.size() << " ";
        for (char& c : s) cout << c-'a'+1 << " ";
    }
}

int32_t main(){
    fastio;
    solve();
    return 0;
}