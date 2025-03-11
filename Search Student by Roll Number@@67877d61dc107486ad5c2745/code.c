#include <stdio.h>
#include <string.h>

struct Stu {
    int RoNum;
    char name[50];
    float marks;
};

int main() {
    struct Stu Sts[100];
    int n, searchRollNum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &Sts[i].RoNum);
        scanf(" %[^\n]", Sts[i].name);  // Reads the string including spaces
        scanf("%f", &Sts[i].marks);
    }

    scanf("%d", &searchRollNum);

    for (int i = 0; i < n; i++) {
        if (Sts[i].RoNum == searchRollNum) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", Sts[i].RoNum, Sts[i].name, Sts[i].marks);
            break;  // Exit loop after finding the desired student
        }
        else{
            printf("Student not found");
        }
    }

    return 0;
}
