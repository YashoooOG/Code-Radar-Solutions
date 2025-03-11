#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

char getGrade(float marks) {
    if (marks >= 85) return 'A';
    if (marks >= 70) return 'B';
    return 'C';
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll, students[i].name, getGrade(students[i].marks));
    }

    return 0;
}
