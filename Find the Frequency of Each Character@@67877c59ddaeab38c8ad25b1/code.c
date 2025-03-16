#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i;

    scanf(" %[^\n]", str); 

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > 0) {
            printf("%c: %d\n", str[i], freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]] = 0;
        }
    }

    return 0;
}
