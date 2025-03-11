#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

struct Student find_student_by_roll_number(struct Student students[], int n, int roll_number_to_search) {
    for (int i = 0; i < n; i++) {
        if (students[i].roll_number == roll_number_to_search) {
            return students[i];
        }
    }
    struct Student empty_student = {0, "", 0.0};
    return empty_student;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    int roll_number_to_search;
    scanf("%d", &roll_number_to_search);

    struct Student student = find_student_by_roll_number(students, n, roll_number_to_search);
    if (student.roll_number != 0) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", student.roll_number, student.name, student.marks);
    } else {
        printf("Student not found\n");
    }

    return 0;
}
