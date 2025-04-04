#include <stdio.h>

int main() {
    // int n;
    // scanf("%d", &n);
    // int max1 = -1000000, max2 = -1000000, num;
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &num);
    //     if (num > max1) {
    //         max2 = max1;
    //         max1 = num;
    //     } else if (num > max2) {
    //         max2 = num;
    //     }
    // }
    // printf("%d\n", max1 * max2);
    // return 0;
    int n, temp;
    int arr[];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i =0;i<n-1;i++){
        for (int i = 0; i<n-1; i++){
            for (int j = 0; j<n-i-1; j++){
                if (arr[j]>arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
            }
        }
    }
    if (arr[0]*arr[1]>arr[n-2]*arr[n-1]){
        printf("%d",arr[0]*arr[1])
    }
    else{
        printf("%d",arr[n-2]*arr[n-1])
    }
    return 0;
}
