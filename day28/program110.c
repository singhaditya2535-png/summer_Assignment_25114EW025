#include <stdio.h>

struct Bank {
    int accNo;
    char name[30];
    float balance;
};

int main() {
    struct Bank b;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Name: ");
    scanf("%s", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    do {
        printf("\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Amount: ");
                scanf("%f", &amount);
                b.balance += amount;
                break;

            case 2:
                printf("Enter Amount: ");
                scanf("%f", &amount);
                if (amount <= b.balance)
                    b.balance -= amount;
                else
                    printf("Insufficient Balance!\n");
                break;

            case 3:
                printf("\nAccount No: %d", b.accNo);
                printf("\nName: %s", b.name);
                printf("\nBalance: %.2f\n", b.balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}