#include <stdio.h>

int countTrailingZeros(int num) {
    if (num == 0) return 32;
    
    int count = 0;
    
    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }

    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countTrailingZeros(num));
    return 0;
