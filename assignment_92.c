#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};
    char maxChar;
    int max = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(count[(int)str[i]] > max) {
            max = count[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c", maxChar);
    printf("\nFrequency = %d", max);

    return 0;
}