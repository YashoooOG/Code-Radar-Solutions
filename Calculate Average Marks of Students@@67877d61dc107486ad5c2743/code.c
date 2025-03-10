#include <stdio.h>

struct Stu {
    int RoNum;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    
    float a = 0;
    struct Stu Sts[n]; // Ensure your compiler supports VLAs
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &Sts[i].RoNum);
        scanf(" %[^\n]", Sts[i].name); // Remove 's' from the format specifier
        scanf("%f", &Sts[i].marks);
    }

    for (int i = 0; i < n; i++) {
        a += Sts[i].marks;
    }

    printf("Average Marks: %.2f\n", a / n);

    return 0;
}
