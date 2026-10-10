// #Experiment 2: Calculate the area of a circle
// ------------------------------------------------------------
//#define PI 3.14159
//int experiment2() 
#include <stdio.h>
int main()
{
 float radius, area;
 printf("Enter the radius of the circle: ");
 scanf("%f", &radius);
 area = PI * radius * radius;
 printf("Area of the circle = %.2f\n", area);
 return 0;
}
