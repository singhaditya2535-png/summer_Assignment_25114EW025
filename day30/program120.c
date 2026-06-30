#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
struct Student s[5];
int n;
void input() {
    int i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nRoll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void display() {
    int i;
    printf("\nRoll\tName\tMarks\n");
    for(i = 0; i < n; i++)
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
}
int main() {
    input();
    display();
    return 0;
}