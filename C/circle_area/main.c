#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   double PI = 3.14159, radius, area;

   printf("Type the value of the Cyrcle's radius: ");
   scanf("%lf", &radius);

   area = PI * (pow(radius, 2));

   printf("Cyrcle area = %.3lf\n", area);




    return 0;
}
