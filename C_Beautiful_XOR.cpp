#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1000000007;
#define srt(v) sort(v.begin(), v.end());
#define srt_Dec(v) sort(v.begin(), v.end(), greater<int>());

int solve1()
{

    int a, b;
    cin >> a >> b;

    if (__lg(b) > __lg(a))
    {
        cout << -1 << "\n";
    }
    else if (a == b)
        cout << 0 << "\n";

    else if ((__lg(b) == __lg(a)) && (b > a))
    {
        cout << 1 << "\n";
        cout << (a ^ b) << "\n";
    }

    else if (a > b)
    {
        if (__lg(a) > __lg(b))
        {
            if ((a & (1 << __lg(b))) == 0)
            {
                a = a ^ (1 << __lg(b));
                cout << 2 << "\n";
                cout << (1 << __lg(b))<<" ";
                cout << (a ^ b) << "\n";
            }
            else
            {
                cout << 1 << "\n";
                cout << (a ^ b) << "\n";
            }
        }
        else
        {
            cout << 1 << "\n";
            cout << (a ^ b) << "\n";
        }
    }

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve1();
    }
    return 0;
}