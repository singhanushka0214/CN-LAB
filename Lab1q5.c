#include<stdio.h>
#include<string.h>
struct Employee
{
    int empid;
    char name[30];
    int salary;
};
struct Company
{
    char compName[30];
    struct Employee emp;
};

int main()

{
    struct Company comp;
    comp.emp.empid = 10;
    strcpy(comp.emp.name, "Anushka");
    comp.emp.salary = 200;
    strcpy(comp.compName, "GOOGLE");
    printf("Details: \n");
    printf("Name: %s\n", comp.emp.name);
    printf("Employee Id: %d\n", comp.emp.empid);
    printf("Salaey: %d", comp.emp.salary);
    printf("Company Name: %s", comp.compName);

    
}
