#include <stdio.h>

int main() {
    char str[100], newStr[100];
    int i, j = 0;

    scanf("%[^\n]", str);  

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {  
            newStr[j] = str[i];  
            j++;
        }
    }
    newStr[j] = '\0';

    printf("%s\n", newStr);
    return 0;
}
