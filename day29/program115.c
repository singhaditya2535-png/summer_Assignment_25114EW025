#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int ch;
    printf("Enter first string: ");
    scanf("%s", s1);
    do {
        printf("\n1.Length\n2.Copy\n3.Concat\n4.Exit\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Length = %lu\n", strlen(s1));
                break;
            case 2:
                strcpy(s2, s1);
                printf("Copied String = %s\n", s2);
                break;
            case 3:
                printf("Enter second string: ");
                scanf("%s", s2);
                strcat(s1, s2);
                printf("Concatenated String = %s\n", s1);
                break;
            case 4:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice");
        }
    } while(ch != 4);
    return 0;
}