#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int hash[256] = {0};
    int i, index = 0;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (hash[(unsigned char)str[i]] == 0) {
            hash[(unsigned char)str[i]] = 1;
            result[index++] = str[i];
        }
    }
    result[index] = '\0'; 

    printf(" %s\n", result);

    return 0;
}
