#include <stdio.h>

int main() {
    int n, maxLength = 1, currentLength = 1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currentLength++;
        } else if (arr[i] != arr[i - 1]) {
            currentLength = 1;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("%d", maxLength);
    return 0;
}
