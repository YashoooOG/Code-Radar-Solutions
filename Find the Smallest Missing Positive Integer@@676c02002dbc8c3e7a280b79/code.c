#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n], present[n + 1];

    for (i = 0; i <= n; i++) {
        present[i] = 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = 1;
        }
    }

    for (i = 1; i <= n; i++) {
        if (present[i] == 0) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("%d\n", n + 1);
    return 0;
}
