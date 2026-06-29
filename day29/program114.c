#include <stdio.h>
int main() {
    int a[20], n, i, ch, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    do {
        printf("\n1.Display\n2.Search\n3.Exit\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Array: ");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                break;

            case 2:
                printf("Enter element to search: ");
                scanf("%d", &x);
                for(i = 0; i < n; i++) {
                    if(a[i] == x) {
                        printf("Found at position %d", i + 1);
                        break;
                    }
                }
                if(i == n)
                    printf("Element not found");
                break;

            case 3:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice");
        }
    } while(ch != 3);
    return 0;
}