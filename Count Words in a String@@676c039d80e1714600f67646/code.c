#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int count = 0, inWord = 0;

    if (!fgets(str, sizeof(str), stdin)) {
        printf("0\n");
        return 0;
    }

    int len = strlen(str);
    if (len == 0 || strspn(str, " \t\n") == len) {  // Check if string is empty or only spaces
        printf("0\n");
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
