#include <stdio.h>
#include <string.h>

int main() {
    char str[500];  
    scanf(" %[^\n]", str);  
    int count = 0;
    char *token= strtok(str, " ");

   
    while (token != NULL) {
        count++;  
        token = strtok(NULL, " ");
    }

    printf("%d\n", count);

    return 0;
}
