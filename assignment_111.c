#include <stdio.h>

int main() {
    int seats = 10, ticket;

    while(1) {
        printf("\nAvailable Seats = %d", seats);
        printf("\nEnter tickets to book (0 to Exit): ");
        scanf("%d", &ticket);

        if(ticket == 0)
            break;

        if(ticket <= seats) {
            seats -= ticket;
            printf("Booking Successful!\n");
        }
        else {
            printf("Not enough seats available.\n");
        }
    }

    return 0;
}