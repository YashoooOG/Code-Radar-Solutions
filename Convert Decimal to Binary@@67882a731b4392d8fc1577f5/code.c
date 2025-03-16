#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int binary[32];  
    int i = 0;

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        binary[i++] = n & 1; 
        n = n >> 1;          
    }

   
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}
