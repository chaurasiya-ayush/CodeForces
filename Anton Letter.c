#include <stdio.h>
#include <string.h>

int main() {
    char str[1001]; // Maximum length of the input is 1000
    int present[26] = {0}; // Array to track unique letters
    int count = 0;

    // Read the entire input line
    fgets(str, sizeof(str), stdin);

    // Process the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // If it's a lowercase letter
            if (!present[str[i] - 'a']) { // If it's not counted yet
                present[str[i] - 'a'] = 1;
                count++;
            }
        }
    }

    // Output the count of distinct letters
    printf("%d\n", count);
    return 0;
}
