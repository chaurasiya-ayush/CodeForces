
#include <stdio.h>
#include <string.h>
 
int main() {
    char s[200];
    scanf("%s", s); 
 
    for (int j = 0; j < strlen(s); ) {
        if (s[j] == '-') {
            if (s[j + 1] == '-') { 
                printf("2");
                j += 2; 
            } else {
                printf("1");
                j += 2; 
            }
        } 
        
        else { 
           printf("0");
           j++;
        }
    }
 
    return 0;
}