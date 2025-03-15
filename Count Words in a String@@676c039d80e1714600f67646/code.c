#include <stdio.h>

int main() {
    char input[1000];
    int count = 0;

    gets(input); 

    for(int i = 0; input[i] != '\0'; i++) {
        if(input[i] == ' ') {
            count++;
        }
    }

    printf("%d", count); 
    return 0;
}
