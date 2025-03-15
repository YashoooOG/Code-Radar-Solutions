#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);

    strcpy(result, str1);
    strcat(result, str2);

    printf("%s\n", result);

    return 0;
}
