#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }

    for (int i = 0; i < n; i++) {
        float bonus = (emp[i].salary < 50000) ? emp[i].salary * 0.10 : emp[i].salary * 0.05;
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", emp[i].id, emp[i].name, bonus);
    }

    return 0;
}
