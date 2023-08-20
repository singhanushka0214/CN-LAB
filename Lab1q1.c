//Swap two numbers using call by reference.
#include<stdio.h>
void swapFunc(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    swapFunc(&a, &b);
    printf("Swapped Numbers: %d %d", a ,b);
    return 0;
}
