#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;

        if(count[(int)str[i]] == 2) {
            printf("First repeating character = %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character found");
    return 0;
}