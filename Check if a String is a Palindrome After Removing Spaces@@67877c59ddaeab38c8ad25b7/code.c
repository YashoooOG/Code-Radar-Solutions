#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], cleanStr[100], reversedStr[100];
    int i, j = 0, len;
    scanf("%[^\n]", str); 

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
