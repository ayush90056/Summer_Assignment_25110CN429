#include <stdio.h>

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact c[10];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nContact %d\n", i+1);

        printf("Enter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);
    }

    printf("\nContact List\n");
    printf("Name\tPhone Number\n");

    for(i=0; i<n; i++) {
        printf("%s\t%s\n", c[i].name, c[i].phone);
    }

    return 0;
}