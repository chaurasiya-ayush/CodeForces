#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        int possible = 0;
 
        if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
            possible = 1;
 
        if ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0)
            possible = 1;
 
        if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
            possible = 1;
 
        printf(possible ? "YES\n" : "NO\n");
    }
    return 0;
}