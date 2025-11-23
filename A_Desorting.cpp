#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    long long a, b;
    long long minn = 1e9 + 5;
    cin >> a;
    b = a;
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        long long k = a - b;
        if (k < 0)
        {
            flag = false;
        }
        else
        {
            minn = min(k, minn);
        }
        b = a;
    }
    if (!flag)
    {
        cout << 0 << endl;
        return;
    }
    cout << minn / 2 + 1 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}