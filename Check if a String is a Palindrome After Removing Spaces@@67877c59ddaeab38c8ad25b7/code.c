#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], cleanStr[100], reversedStr[100];
    int i, j = 0, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleanStr[j++] = tolower(str[i]);
        }
    }
    cleanStr[j] = '\0';

    len = strlen(cleanStr);
    for (i = 0; i < len; i++) {
        reversedStr[i] = cleanStr[len - i - 1];
    }
    reversedStr[len] = '\0';

    if (strcmp(cleanStr, reversedStr) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
