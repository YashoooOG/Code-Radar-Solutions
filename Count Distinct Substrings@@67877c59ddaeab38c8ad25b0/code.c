#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int len, count = 0;

    scanf("%s", str); 
    len = strlen(str);

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            count++; 
        }
    }

    printf("%d\n", count); 

    return 0;
}
