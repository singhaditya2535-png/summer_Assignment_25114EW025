#include <stdio.h>
struct Item {
    int id, qty;
    char name[20];
    float price;
};
int main() {
    struct Item p;
    int ch;
    do {
        printf("\n1.Add Item\n2.Display Item\n3.Exit\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Enter ID, Name, Quantity, Price: ");
                scanf("%d %s %d %f", &p.id, p.name, &p.qty, &p.price);
                break;
            case 2:
                printf("\nID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",
                       p.id, p.name, p.qty, p.price);
                break;
            case 3:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice!");
        }
    } while(ch != 3);
    return 0;
}