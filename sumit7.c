// #Experiment 7: Check whether a number is even or odd
// ------------------------------------------------------------
//int experiment7()
#include <stdio.h>
int main()
{
 int number;
 printf("Enter a number: ");
 scanf("%d", &number);
 if (number % 2 == 0) {
 printf("%d is Even\n", number);
 } else {
 printf("%d is Odd\n", number);
 }
 return 0;
}
