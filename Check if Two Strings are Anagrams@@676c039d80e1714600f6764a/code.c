#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};

    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("No\n");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(int)str1[i]]++;
        freq2[(int)str2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
