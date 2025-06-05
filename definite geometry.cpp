#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

double dist(const vector<int>& a, const vector<int>& b) {
    int dx = a[0] - b[0];
    int dy = a[1] - b[1];
    return sqrt(dx * dx + dy * dy);
}

double solve(int k, vector<vector<int>>& points) {
    sort(points.begin(), points.end());
    double min_d = 1e9;

    for (size_t i = 0; i + k - 1 < points.size(); ++i) {
        double d = dist(points[i], points[i + k - 1]);
        if (d < min_d) min_d = d;
    }

    double min_r = min_d / 2.0;
    return min_r * min_r * M_PI;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> points(n, vector<int>(2));
    for (int i = 0; i < n; ++i) {
        cin >> points[i][0] >> points[i][1];
    }

    cout << fixed << setprecision(10) << solve(k, points) << endl;
    return 0;
}
