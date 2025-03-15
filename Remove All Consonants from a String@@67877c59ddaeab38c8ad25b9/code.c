#include <stdio.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str); 

    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')) {
            printf("%c", str[i]);
        }
    }

    printf("\n");
    return 0;
}
