#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <numeric>
using namespace std;

#define f first
#define s second
#define mp make_pair
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define forit(it,S) for(__typeof(S.begin()) it = S.begin(); it != S.end(); ++it)
#ifdef WIN32
#define I64d "%I64d"
#else
#define I64d "%lld"
#endif

typedef pair <int, int> pi;
typedef vector <int> vi;
typedef long long ll;

int xa, ya, xb, yb;

void print(int x, int y) {
    if (x == xa && y == ya) return;
    if (x == xb && y == yb) return;
    printf("%d %d ", x, y);
}

int main() {
    scanf("%d%d%d%d", &xa, &ya, &xb, &yb);
    int dx = abs(xa - xb);
    int dy = abs(yb - ya);
    if (dx != dy && dx > 0 && dy > 0) {
        puts("-1");
        return 0;
    }
    int d = max(dx, dy);
    int x = min(xa, xb);
    int y = min(ya, yb);
    print(x, y);
    print(x, y + d);
    print(x + d, y);
    print(x + d, y + d);
    return 0;
}