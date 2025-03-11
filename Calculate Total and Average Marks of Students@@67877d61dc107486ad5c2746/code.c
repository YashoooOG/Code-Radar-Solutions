#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int N;
    float total_marks = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &N);
    
    struct Student students[N];
    
    for (int i = 0; i < N; i++) {
       
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        total_marks += students[i].marks;
    }
    
    float average_marks = total_marks / N;
    
    printf("Total Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);
    
    return 0;
}
