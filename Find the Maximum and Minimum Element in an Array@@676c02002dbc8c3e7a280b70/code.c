#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    scanf("%d", &arr[0]);

    int min = arr[0], max = arr[0];

    for (int i = 1; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("%d %d\n", min, max);
    return 0;
}
