#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        long long int x;
        scanf("%lld", &x);
 
        if (((x & (x - 1)) == 0) || ((x&(x+1))==0)) {
            printf("-1\n");
        } else {
            int offOn = 0, onOff = 0;
 
            for (int j = 0; j <= 30; j++) {
                if (offOn == 0 && (x & (1 << j)) == 0) {
                    x = (x ^ (1 << j)); 
                    offOn = 1;
                } else if (offOn == 1 && onOff == 0 && (x & (1 << j)) != 0) {
                    x = (x ^ (1 << j));
                    onOff = 1;
                }
            }
            printf("%lld\n", x);
        }
    }
    return 0;
}