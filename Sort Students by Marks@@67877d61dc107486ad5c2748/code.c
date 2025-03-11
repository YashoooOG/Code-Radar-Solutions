#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rollNumber;
    char name[50];
    float marks;
} Student;

int compare(const void *a, const void *b) {
    float marksA = ((Student*)a)->marks;
    float marksB = ((Student*)b)->marks;
    return (marksB > marksA) - (marksB < marksA);
}

void inputStudents(Student students[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

void printStudents(Student students[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student *students = (Student*)malloc(n * sizeof(Student));

    inputStudents(students, n);

    qsort(students, n, sizeof(Student), compare);

    printf("\nSorted student details by marks (descending order):\n");
    printStudents(students, n);

    free(students);

    return 0;
}
