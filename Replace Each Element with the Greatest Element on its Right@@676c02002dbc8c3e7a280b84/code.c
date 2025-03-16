#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[1001] = {0}, min = 1001, maxFreq = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < min)) {
            maxFreq = freq[arr[i]];
            min = arr[i];
        }
    }
    printf("%d\n", min);
    return 0;
}
