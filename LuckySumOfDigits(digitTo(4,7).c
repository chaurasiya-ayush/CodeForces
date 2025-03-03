#include <stdio.h>

void min_lucky_number(int n) {
    // Try the maximum number of 7s first and decrease
    for (int num_sevens = n / 7; num_sevens >= 0; num_sevens--) {
        int remaining = n - (num_sevens * 7);
        
        // Check if remaining can be formed with 4s
        if (remaining % 4 == 0) {
            int num_fours = remaining / 4;
            
            // Print all 4s first (lexicographically smallest)
            for (int i = 0; i < num_fours; i++) {
                printf("4");
            }
            
            // Print all 7s
            for (int i = 0; i < num_sevens; i++) {
                printf("7");
            }
            
            printf("\n");
            return;
        }
    }

    // If no valid number is found
    printf("-1\n");
}

int main() {
    int n;
    scanf("%d", &n);  // Input the sum of digits
    min_lucky_number(n);
    return 0;
}
