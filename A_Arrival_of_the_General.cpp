#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int height;
    int maxHeight = 0, minHeight = 100;
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < n; i++) {
        cin >> height;

        if (height > maxHeight) {
            maxHeight = height;
            maxIndex = i;
        }

        if (height <= minHeight) {
            minHeight = height;
            minIndex = i;
        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) swaps--; 




    
    cout << swaps;
    return 0;
}
