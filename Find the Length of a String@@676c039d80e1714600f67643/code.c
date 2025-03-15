#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf(" %[^\n]", str); // Reads the whole line including spaces

    int length = strlen(str); // Get total length including spaces

    printf("%d\n", length);
    return 0;
}
