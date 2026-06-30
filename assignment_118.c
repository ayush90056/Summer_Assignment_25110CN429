#include <stdio.h>

struct Book
{
    int id;
    char name[50];
};

int main()
{
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID   : %d", b[i].id);
        printf("\nBook Name : %s\n", b[i].name);
    }

    return 0;
}