// #Experiment 3: Calculate the average of three numbers
// ------------------------------------------------------------
//int experiment3()
include <stdio.h>
  int main()
{
 float a, b, c, average;
 printf("Enter three numbers: ");
 scanf("%f %f %f", &a, &b, &c);
 average = (a + b + c) / 3;
 printf("Average of the three numbers = %.2f\n", average);
 return 0;
}


