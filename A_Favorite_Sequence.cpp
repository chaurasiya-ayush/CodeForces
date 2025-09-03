#include <iostream>
#include <vector>
using namespace std;

void run_case() {
    int N;
    cin >> N;

    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    vector<int> A;
    int left = 0, right = N - 1;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            A.push_back(B[left]);
            left++;
        } else {
            A.push_back(B[right]);
            right--;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << (i + 1 < N ? ' ' : '\n');
    }
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}
