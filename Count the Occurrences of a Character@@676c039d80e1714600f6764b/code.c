#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    scanf("%[^\n]", str);
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
