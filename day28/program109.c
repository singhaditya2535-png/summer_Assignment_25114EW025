#include <stdio.h>

struct Book {
    int id;
    char name[30];
};

int main() {
    struct Book b;
    int choice;

    do {
        printf("\n1. Add Book\n2. Display Book\n3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b.id);

                printf("Enter Book Name: ");
                scanf("%s", b.name);
                break;

            case 2:
                printf("\nBook ID   : %d", b.id);
                printf("\nBook Name : %s\n", b.name);
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
