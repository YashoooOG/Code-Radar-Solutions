#include <stdio.h>
#include <ctype.h>

void checkCharacter(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    }
    else if (isalpha(ch)) {
        printf("Consonant\n");
    }
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }
}

int main() {
    char ch;
    scanf(" %c", &ch);
    checkCharacter(ch);

    return 0;
}
