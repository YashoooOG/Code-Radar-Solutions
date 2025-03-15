#include <stdio.h>
#include <string.h> 

int main() {
    char input[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
