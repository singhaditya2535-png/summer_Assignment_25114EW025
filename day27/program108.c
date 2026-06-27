#include <stdio.h>
struct student{
    int roll;
    char name[50];
    int total;
    int m1,m2,m3,m4,m5;
    float percentage;
    char grade;
};
int main(){
    struct student s;
    printf("enter roll number: ");
    scanf("%d",&s.roll);
    printf("enter student namr: ");
    scanf("%s",s.name);
    printf("enter marks of 5 subjects: \n");
    printf("subject 1: ");
    scanf("%d",&s.m1);
    printf("subject 2: ");
    scanf("%d",&s.m2);
    printf("subject m3: ");
    scanf("%d",&s.m3);
    printf("subject 4: ");
    scanf("%d",&s.m4);
    printf("subject 5: ");
    scanf("%d",&s.m5);
    s.total=s.m1+s.m2+s.m3+s.m4+s.m5;
    s.percentage=s.total/5.0;
    if(s.percentage>=90){
        s.grade='A';
    }
    else if(s.percentage>=75){
        s.grade='B';
    }
    else if(s.percentage>=60){
        s.grade='C';
    }
    else{
        s.grade='D';
    }
    printf("\n------ MARKSHEET ------\n");
    printf("Roll Number: %d\n",s.roll);
    printf("Name : %s\n",s.name);
    printf("subject 1: %d\n",s.m1);
    printf("subject 2: %d\n",s.m2);
    printf("subject 3: %d\n",s.m3);
    printf("subject 4: %d\n",s.m4);
    printf("subject 5: %d\n",s.m5);
    printf("Total marks: %d\n",s.total);
    printf("Percentagr: %.2f\n",s.percentage);
    printf("grade: %c\n",s.grade);
    return 0;

}