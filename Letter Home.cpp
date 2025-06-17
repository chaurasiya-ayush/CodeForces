#include<bits/stdc++.h>
using namespace std;

int letterBox() {
    int n, s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int &elem : arr) {
        cin >> elem;
    }

    int left = arr[0];
    int right = arr[n-1];

    int steps = (right - left) + min(abs(s - left), abs(s - right));

    return steps;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << letterBox() << endl;
    }
}
