#include <stdio.h>
#include <string.h>

int main() {
    char str[100], oldChar, newChar;

    scanf(" %[^\n]", str);
    getchar();  
    scanf("%c", &oldChar);
    getchar();  
    scanf("%c", &newChar);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }

    printf("%s\n", str);

    return 0;
}
