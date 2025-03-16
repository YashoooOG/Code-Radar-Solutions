#include <stdio.h>

int main() {
    int n, i, sum, num;
    scanf("%d", &n);
    int arr[n], result[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        sum = 0;
        num = arr[i];
        if (num < 0) num = -num; // Handle negative numbers
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        result[i] = sum;
    }
    for (i = 0; i < n; i++) printf("%d ", result[i]);
    return 0;
}
