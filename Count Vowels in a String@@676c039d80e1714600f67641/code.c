#include <stdio.h>

int main() {
    int count = 0;
    char name[100];

    scanf("%s", name);


    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == 'a' ||name[i] == 'e' ||name[i] == 'i' ||name[i] == 'o' ||name[i] == 'u' ) count++;
        if (name[i] == 'A' ||name[i] == 'E' ||name[i] == 'I' ||name[i] == 'O' ||name[i] == 'U' ) count++;
    }

    printf("%d\n", count);
    return 0;
}