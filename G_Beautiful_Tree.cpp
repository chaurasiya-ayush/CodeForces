#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n == 2){
            cout << -1 << "\n";
            continue;
        }

        if(n == 3){
            
            cout << "1 3\n2 3\n";
            continue;
        }

        cout << "1 2\n"; 
        cout << "3 1\n"; 
        cout << "4 1\n"; 

        
        for(int i = 5; i <= n; i++){
            cout << i << " 1\n"; 
        }
    }

    return 0;
}
