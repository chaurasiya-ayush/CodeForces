#include <stdio.h>
#include <string.h>

int main() {   
    char str[100];
    int one = 0, two = 0, three = 0;
    
    scanf("%99s", str);  
    int len = strlen(str);  

    for (int i = 0; i < len; i += 2) {
        if (str[i] == '1') {
            one++;
        } else if (str[i] == '2') {
            two++;
        } else if (str[i] == '3') {
            three++;
        }
    }

    int printed = 0; 

    for (int i = 0; i < one; i++) {
        if (printed) printf("+");
        printf("1");
        printed = 1;
    }
    for (int i = 0; i < two; i++) {
        if (printed) printf("+");
        printf("2");
        printed = 1;
    }
    for (int i = 0; i < three; i++) {
        if (printed) printf("+");
        printf("3");
        printed = 1;
    }

    return 0;
}
