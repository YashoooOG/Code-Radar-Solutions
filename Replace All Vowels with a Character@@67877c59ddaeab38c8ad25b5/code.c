#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100], replacement;

    scanf("%s", str);
    scanf(" %c", &replacement);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = replacement;
        }
    }

    printf("%s", str);

    return 0;
}
