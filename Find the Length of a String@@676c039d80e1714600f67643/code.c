#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    scanf("%s", str);  // Read a single word

    while (str[length])  // Count characters until null terminator
        length++;

    printf("%d\n", length);
    return 0;
}
