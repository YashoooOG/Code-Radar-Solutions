#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    int length = strlen(str);

    printf("%d\n", length);
    return 0;
}
