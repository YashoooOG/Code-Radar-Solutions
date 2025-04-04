#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int product1 = arr[0] * arr[1];         
    int product2 = arr[n - 1] * arr[n - 2]; 

    if (product1 > product2) {
        printf("%d\n", product1);
    } else {
        printf("%d\n", product2);
    }

    return 0;
}
