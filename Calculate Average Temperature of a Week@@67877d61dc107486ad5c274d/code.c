#include <stdio.h>

int main() {
    char day[10];
    float temperature, sum = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%s %f", day, &temperature);
        sum += temperature;
    }

    printf("Average Temperature: %.2f\n", sum / 7);

    return 0;
}
