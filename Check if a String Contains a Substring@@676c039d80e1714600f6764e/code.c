#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], substr[100];

    scanf(" %[^\n]", str); 
    scanf(" %[^\n]", substr); 

    if (strstr(str, substr) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
