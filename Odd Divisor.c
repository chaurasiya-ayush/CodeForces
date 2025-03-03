#include <stdio.h>
 
int has_odd_divisor(long long n) {
    // If n is a power of 2, it has no odd divisors greater than 1
    return (n & (n - 1)) != 0;
}
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        long long n;
        scanf("%lld", &n);
 
        printf(has_odd_divisor(n) ? "YES\n" : "NO\n");
    }
 
    return 0;
}