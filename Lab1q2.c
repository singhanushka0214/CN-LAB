//Swap two strings using command line argument
#include<stdio.h>
void swapFunc(char **str1, char **str2)
{
   char *temp;
   *temp = *str1;
   *str1 = *str2;
   *str2 = *temp;
}
int main(int argc, char *argv[])
{
   char *str1, *str2;
   printf("Enter Two Strings: ");
   scanf("%s, %s", &str1, &str2);
   swapFunc(&str1, &str2);
   printf("After Swapping: %s %s", str1, str2);

}
