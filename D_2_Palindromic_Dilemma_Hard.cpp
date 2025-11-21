#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1000000007;
#define srt(v) sort(v.begin(), v.end());
#define srt_Dec(v) sort(v.begin(), v.end(), greater<int>());

int solve1()
{

    return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    int xo = 0;
    for (int i = 0; i < n; i++)
    {
        xo ^= v[i];
    }

    // cout << xo << " ";

    if (xo == 0)
    { 
        unordered_map<int, int> um;
        int pref = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            pref ^= v[i];
            um[pref]++;

            if (pref == 0)
            {
                ans += 2;
            }
        }


        int flag = 0, key;
        for (auto it : um)
        {
            if (it.second == ans / 2)
            {
                key = it.first;
                if(key!=0){
                    flag = 1;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << ans;
        }
        else
            cout << ans / 2;
    }

    else if (xo != 0)
    { 
        int count = 0;
        int value = 0;
        // cout << value;
        for (int i = 0; i < n; i++)
        {
            value ^= v[i];
            if (value == xo)
            {
                count++;
                value = 0;
            }
            // cout << value << " ";
        }
        cout << count;
    }


    return 0;
}