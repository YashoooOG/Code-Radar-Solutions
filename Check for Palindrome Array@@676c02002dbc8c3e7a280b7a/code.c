#include <stdio.h>

int main() {
    int n, i, flag = 1;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n / 2; i++)
        if (arr[i] != arr[n - i - 1]) flag = 0;
    if (flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
