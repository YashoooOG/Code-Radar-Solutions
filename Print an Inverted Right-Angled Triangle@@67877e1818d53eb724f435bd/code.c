#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    scanf("%d", &n);
    for (int i = n-1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* \t");
        }
        printf("\n");
    }
    return 0;
}