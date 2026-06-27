#include <stdio.h>
struct student{
    int rollno;
    char name[50];
    float marks;
};
int main(){
    struct student s;
    printf("enter roll number: ");
    scanf("%d",&s.rollno);
    printf("enter name: ");
    scanf("%s",s.name);
    printf("enter marks: ");
    scanf("%f",&s.marks);
    printf("\n==== student record ====\n");
    printf("Roll No: %d\n",s.rollno);
    printf("Name   : %s\n",s.name);
    printf("Marks  :%.2f\n",s.marks);
    return 0;
}
    