#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int max1 = -1000000, max2 = -1000000, num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }
    printf("%d\n", max1 * max2);
    return 0;
}
