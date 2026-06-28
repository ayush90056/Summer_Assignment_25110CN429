#include <stdio.h>

struct Book {
    int id;
    char name[50];
    int quantity;
};

int main() {
    struct Book b[10];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nBook %d\n", i+1);
        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &b[i].quantity);
    }

    printf("\nLibrary Records\n");
    printf("ID\tBook Name\tQuantity\n");

    for(i=0; i<n; i++) {
        printf("%d\t%s\t\t%d\n", b[i].id, b[i].name, b[i].quantity);
    }

    return 0;
}