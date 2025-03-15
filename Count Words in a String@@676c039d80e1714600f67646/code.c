#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count = 0, inWord = 0;

    scanf(" %[^\n]", str);  

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
