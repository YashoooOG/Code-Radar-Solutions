#include <stdio.h>

int main() {
    int n, t, index = -1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}
