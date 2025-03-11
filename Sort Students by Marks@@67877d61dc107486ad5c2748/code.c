#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].marks < students[j].marks) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
    }

    return 0;
}
