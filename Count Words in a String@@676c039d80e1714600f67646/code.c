#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    if (!fgets(str, sizeof(str), stdin)) {
        printf("0\n");
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ' && str[i] != '\n') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
