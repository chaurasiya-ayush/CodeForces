#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;  // Read number of friends
    
    int p[n], res[n];  // p[i] stores who received gift from i+1, res[i] stores who gifted to i+1
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];  // Read input
        res[p[i] - 1] = i + 1;  // Store who gave gift to friend (p[i])
    }
    
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";  // Print the result
    }
    
    return 0;
}