#include <stdio.h>

int main() {
    char str[1000];
    char mostFrequent = '\0';
    int maxFreq = 0;

    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') continue; 
        
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > maxFreq || (count == maxFreq && str[i] < mostFrequent)) {
            maxFreq = count;
            mostFrequent = str[i];
        }
    }

    printf("%c\n", mostFrequent);

    return 0;
}
