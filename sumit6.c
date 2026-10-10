// #Experiment 6: Order of execution (precedence and associativity) of operators
// ------------------------------------------------------------
//int experiment6()
#include  <stdio.h>
int main()
{
 int a = 5, b = 10, c = 2, result1, result2;
 // Without parentheses: * has higher precedence than +
 result1 = a + b * c; // evaluated as a + (b * c)
 // With parentheses: forces addition to happen first
 result2 = (a + b) * c;
 printf("a + b * c = %d\n", result1);
 printf("(a + b) * c = %d\n", result2);
 // Relational and logical operator precedence
 int x = 5, y = 10, z = 15;
 int logicResult = x < y && y < z; // relational evaluated before logical AND
 printf("x < y && y < z = %d\n", logicResult);
 return 0;
}
