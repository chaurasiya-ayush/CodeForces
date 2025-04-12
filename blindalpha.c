#include <stdio.h>
#include <string.h>

int main() {
    char direction;
    scanf(" %c", &direction);

    char str[1001];
    scanf("%s", str);

    char row1[] = "qwertyuiop";
    char row2[] = "asdfghjkl;";
    char row3[] = "zxcvbnm,./";

    for (int j = 0; j < strlen(str); j++) {
        char ch = str[j];
        char *row = NULL;
        int index = -1;
        if (strchr(row1, ch)) {
            row = row1;
        } else if (strchr(row2, ch)) {
            row = row2;
        } else if (strchr(row3, ch)) {
            row = row3;
        }

        // Find the index of the character in that row
        for (int i = 0; i < strlen(row); i++) {
            if (row[i] == ch) {
                index = i;
                break;
            }
        }

        // Shift character according to direction
        if (direction == 'R') {
            printf("%c", row[index - 1]);  // shift left on keyboard
        } else {
            printf("%c", row[index + 1]);  // shift right on keyboard
        }
    }

    printf("\n");
    return 0;
}
