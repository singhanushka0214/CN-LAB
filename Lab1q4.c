#include<stdio.h>
struct stud
{
    int roll;
    int marks;
};
int main()
{
    struct stud test[5];
    printf("Enter Roll and Marks: \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &test[i].roll);
        scanf("%d", &test[i].marks);
    }
    for(int i=0; i<5; i++)
    {
        printf("Roll number: %d\n", test[i].roll);
        printf("Marks: %d\n", test[i].marks);
    }

}
