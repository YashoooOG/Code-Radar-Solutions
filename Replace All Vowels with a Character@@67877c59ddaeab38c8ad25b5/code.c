#include <stdio.h>
#include <ctype.h> // For tolower function

int main() {
    char str[100], replacement;

    fgets(str, sizeof(str), stdin);

    scanf(" %c", &replacement);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // To handle both uppercase and lowercase vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = replacement;
        }
    }

    printf("%s", str);

    return 0;
}
