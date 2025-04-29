#include <bits/stdc++.h>
using namespace std;


int vectorJindagi(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] <= x) {
            ans = mid;      
            low = mid + 1;   
        } else {
            high = mid - 1;  
        }
    }

    return ans + 1; 
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        cout << vectorJindagi(arr, x) << "\n";
    }

    return 0;
}
