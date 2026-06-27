#include <stdio.h>
struct Employee{
    int empid;
    char name[50];
    float salary;
};
int main(){
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d",&emp.empid);
    printf("Enter Employee Name: ");
    scanf("%s",emp.name);
    printf("Enter salary: ");
    scanf("%f",&emp.salary);
    printf("\n------ employee record ------\n");
    printf("Employee ID  : %d\n",emp.empid);
    printf("Employee Name: %s\n",emp.name);
    printf("Salary       : %.2f\n",emp.salary);
    return 0;
}