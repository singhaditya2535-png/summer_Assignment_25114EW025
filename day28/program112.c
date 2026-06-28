#include <stdio.h>

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact c;
    int choice;

    do {
        printf("\n1. Add Contact\n2. Display Contact\n3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf("%s", c.name);

                printf("Enter Phone Number: ");
                scanf("%s", c.phone);
                break;

            case 2:
                printf("\nName : %s", c.name);
                printf("\nPhone: %s\n", c.phone);
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