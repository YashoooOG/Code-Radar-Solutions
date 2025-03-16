#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // 32-bit MSB mask (1 << 31)
    if (num & (1 << 31))
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
