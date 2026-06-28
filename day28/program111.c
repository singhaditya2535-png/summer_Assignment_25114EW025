#include <stdio.h>

int main() {
    int seats = 50, choice, ticket;

    do {
        printf("\n1. Book Ticket\n2. Check Available Seats\n3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Number of Tickets: ");
                scanf("%d", &ticket);

                if (ticket <= seats) {
                    seats -= ticket;
                    printf("Booking Successful!\n");
                    printf("Remaining Seats = %d\n", seats);
                } else {
                    printf("Not enough seats available!\n");
                }
                break;

            case 2:
                printf("Available Seats = %d\n", seats);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}