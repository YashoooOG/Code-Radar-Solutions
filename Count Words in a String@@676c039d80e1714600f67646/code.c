#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    scanf("%[^\n]", str); // Read the entire line of input
    for (int i = 0; str[i] != '\0'; i++) { // Check for null terminator
        count++; // Increment count for each character
    }

    printf("%d\n", count); // Print the character count
    return 0;
}
