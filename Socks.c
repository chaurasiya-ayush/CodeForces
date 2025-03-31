#include <stdio.h>

#define MAX_N 100000  

int table[MAX_N + 1] = {0};  

int main() {
    int n;
    scanf("%d", &n);

    int max_socks = 0, current_socks = 0;

    for (int i = 0; i < 2 * n; i++) {
        int sock;
        scanf("%d", &sock);

        if (table[sock]) {
            table[sock] = 0; 
            current_socks--;
        } else {
            table[sock] = 1; 
            current_socks++;
            if (current_socks > max_socks) {
                max_socks = current_socks;
            }
        }
    }

    printf("%d\n", max_socks);
    return 0;
}
