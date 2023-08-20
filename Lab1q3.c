#include<stdio.h>
struct stud
{
   int roll;
   char name[30];
   int age;
   char branch[30];
};
 int main()
 {
   struct stud s;
   struct stud *ptr = &s;
   printf("Enter Name: ");
   scanf("%s", &ptr->name);
   printf("Enter Roll Number: ");
   scanf("%d", &ptr->roll);
   printf("Enter Age: ");
   scanf("%d", &ptr->age);
   printf("Enter Branch: ");
   scanf("%s", &ptr->branch);
   printf("Name: %s", &ptr->name);
   printf("\nRoll: %d", ptr->roll);
   printf("\nAge: %d",  ptr->age);
   printf("\nBranch: %s", &ptr->branch);

   
   
 }
