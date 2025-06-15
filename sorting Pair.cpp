#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<pair<int, string>> arr(t);
    
    for (int i = 0; i < t; i++) {
        cin >> arr[i].second >> arr[i].first;
        arr[i].first *= -1;
    }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < t; i++) {
        cout << arr[i].second << " " << -1*arr[i].first << "\n";
    }

    return 0;
}