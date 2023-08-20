#include<stdio.h>
#include<string.h>

struct dob
{
    int d;
    int m;
    int y;
};
struct student_info
{
    int roll;
    float cgpa;
    char name[30];
    struct dob age;
};
void valueFunc(struct student_info record)
{
    printf("Roll: %d\n", record.roll);
printf("cgpa: %0.2f\n", record.cgpa);
printf("Name: %s\n", record.name);
printf("DOB: %d-%d-%d\n", record.age.d, record.age.m, record.age.y);


}
int main()
{
    struct student_info record;
    record.roll = 1;
    record.cgpa = 9.38;
    strcpy(record.name, "Anushka Singh");
    record.age.d = 02;
    record.age.m = 01;
    record.age.y = 2004;
    valueFunc(record);

}
