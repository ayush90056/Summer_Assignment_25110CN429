#include <stdio.h>

struct Product
{
    int id;
    char name[30];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int n = 0, choice, i;

    do
    {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Product ID: ");
            scanf("%d", &p[n].id);

            printf("Enter Product Name: ");
            scanf("%s", p[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &p[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &p[n].price);

            n++;
            printf("Product Added Successfully!\n");
            break;

        case 2:
            printf("\nID\tName\tQty\tPrice\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t%s\t%d\t%.2f\n",
                       p[i].id,
                       p[i].name,
                       p[i].quantity,
                       p[i].price);
            }
            break;

        case 3:
            printf("Exit\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while (choice != 3);

    return 0;
}