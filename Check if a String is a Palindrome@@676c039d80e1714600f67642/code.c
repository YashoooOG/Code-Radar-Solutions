#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int length, i;
    int is_palindrome = 1;
    scanf("%s", word);

    length = strlen(word);
    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
