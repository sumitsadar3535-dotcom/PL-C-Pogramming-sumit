#include <stdio.h>
int main()
{
 int a;
 float b;
 double c;
 char ch;
 char name[50];
 
 printf("Enter an integer: ");
 scanf("%d", &a);
 printf("Enter a float value: ");
 scanf("%f", &b);
 printf("Enter a double value: ");
 scanf("%lf", &c);
 printf("Enter a single character: ");
 scanf(" %c", &ch); // space before %c to skip leftover newline/whitespace
 printf("Enter a string (name): ");
 scanf("%s", name); // no & needed since name is an array (decays to pointer)
 
 printf("\n--- Output ---\n");
 printf("Integer entered : %d\n", a);
 printf("Float entered : %.2f\n", b);
 printf("Double entered : %.2lf\n", c);
 printf("Character entered : %c\n", ch);
 printf("String entered : %s\n", name);
 return 0;
}
