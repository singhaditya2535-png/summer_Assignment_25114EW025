#include <stdio.h>
struct salary{
    int empid;
    char name[50];
    float basicsalary;
    float hra;
    float da;
    float totalsalary;
};
int main(){
    struct salary s;
    printf("enter employee Id: ");
    scanf("%d",&s.empid);
    printf("enter employee name: ");
    scanf("%s",s.name);
    printf("enter basic salary: ");
    scanf("%f",&s.basicsalary);
    printf("enter HRE: ");
    scanf("%f",&s.hra);
    printf("enter DA: ");
    scanf("%f",&s.da);
    s.totalsalary=s.basicsalary+s.hra+s.da;
    printf("\n------ Salary Record ------\n");
    printf("Employee ID: %d\n",s.empid);
    printf("Enter employee Name: %s\n ",s.name);
    printf("Enter Basic Salary: %.2f\n",s.basicsalary);
    printf("HRA     : %.2f\n",s.hra);
    printf("DA    : %.2f\n",s.da);
    printf("Total salary: %.2f\n",s.totalsalary);
    return 0;
    
}