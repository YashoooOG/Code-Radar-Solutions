#include <stdio.h>

int main() {
    int n, count = 0;
    float threshold;

    // Input: Number of students
    scanf("%d", &n);

    // Variables to store student data
    int roll;
    char name[50];
    float marks;

    // Input: Student data
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &roll, name, &marks);
        // Count students scoring above the threshold
        if (marks > threshold) {
            count++;
        }
    }

    // Input: Threshold value
    scanf("%f", &threshold);

    // Output: Count of students scoring above the threshold
    printf("Count of students scoring above %.2f: %d\n", threshold, count);

    return 0;
}
